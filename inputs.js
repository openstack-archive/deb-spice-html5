"use strict";
/*
   Copyright (C) 2012 by Jeremy P. White <jwhite@codeweavers.com>

   This file is part of spice-html5.

   spice-html5 is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   spice-html5 is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with spice-html5.  If not, see <http://www.gnu.org/licenses/>.
*/


/*----------------------------------------------------------------------------
**  SpiceInputsConn
**      Drive the Spice Inputs channel (e.g. mouse + keyboard)
**--------------------------------------------------------------------------*/
function SpiceInputsConn()
{
    SpiceConn.apply(this, arguments);

    this.mousex = undefined;
    this.mousey = undefined;
    this.button_state = 0;
    this.waiting_for_ack = 0;
}

SpiceInputsConn.prototype = Object.create(SpiceConn.prototype);
SpiceInputsConn.prototype.process_channel_message = function(msg)
{
    if (msg.type == SPICE_MSG_INPUTS_INIT)
    {
        var inputs_init = new SpiceMsgInputsInit(msg.data);
        this.keyboard_modifiers = inputs_init.keyboard_modifiers;
        DEBUG > 1 && console.log("MsgInputsInit - modifier " + this.keyboard_modifiers);
        // FIXME - We don't do anything with the keyboard modifiers...
        return true;
    }
    if (msg.type == SPICE_MSG_INPUTS_KEY_MODIFIERS)
    {
        var key = new SpiceMsgInputsKeyModifiers(msg.data);
        this.keyboard_modifiers = key.keyboard_modifiers;
        DEBUG > 1 && console.log("MsgInputsKeyModifiers - modifier " + this.keyboard_modifiers);
        // FIXME - We don't do anything with the keyboard modifiers...
        return true;
    }
    if (msg.type == SPICE_MSG_INPUTS_MOUSE_MOTION_ACK)
    {
        DEBUG > 1 && console.log("mouse motion ack");
        this.waiting_for_ack -= SPICE_INPUT_MOTION_ACK_BUNCH;
        return true;
    }
    return false;
}



function handle_mousemove(e)
{
    var msg = new SpiceMiniData();
    var move;
    if (this.sc.mouse_mode == SPICE_MOUSE_MODE_CLIENT)
    {
        move = new SpiceMsgcMousePosition(this.sc, e)
        msg.build_msg(SPICE_MSGC_INPUTS_MOUSE_POSITION, move);
    }
    else
    {
        move = new SpiceMsgcMouseMotion(this.sc, e)
        msg.build_msg(SPICE_MSGC_INPUTS_MOUSE_MOTION, move);
    }
    if (this.sc && this.sc.inputs)
    {
        if (this.sc.inputs.waiting_for_ack < (2 * SPICE_INPUT_MOTION_ACK_BUNCH))
        {
            this.sc.inputs.send_msg(msg);
            this.sc.inputs.waiting_for_ack++;
        }
        else
        {
            DEBUG > 0 && this.sc.log_info("Discarding mouse motion");
        }
    }
}

function handle_mousedown(e)
{
    var press = new SpiceMsgcMousePress(this.sc, e)
    var msg = new SpiceMiniData();
    msg.build_msg(SPICE_MSGC_INPUTS_MOUSE_PRESS, press);
    if (this.sc && this.sc.inputs)
        this.sc.inputs.send_msg(msg);

    e.preventDefault();
}

function handle_contextmenu(e)
{
    e.preventDefault();
    return false;
}

function handle_mouseup(e)
{
    var release = new SpiceMsgcMouseRelease(this.sc, e)
    var msg = new SpiceMiniData();
    msg.build_msg(SPICE_MSGC_INPUTS_MOUSE_RELEASE, release);
    if (this.sc && this.sc.inputs)
        this.sc.inputs.send_msg(msg);

    e.preventDefault();
}

function handle_mousewheel(e)
{
    var press = new SpiceMsgcMousePress;
    var release = new SpiceMsgcMouseRelease;
    if (e.wheelDelta > 0)
        press.button = release.button = SPICE_MOUSE_BUTTON_UP;
    else
        press.button = release.button = SPICE_MOUSE_BUTTON_DOWN;
    press.buttons_state = 0;
    release.buttons_state = 0;

    var msg = new SpiceMiniData();
    msg.build_msg(SPICE_MSGC_INPUTS_MOUSE_PRESS, press);
    if (this.sc && this.sc.inputs)
        this.sc.inputs.send_msg(msg);

    msg.build_msg(SPICE_MSGC_INPUTS_MOUSE_RELEASE, release);
    if (this.sc && this.sc.inputs)
        this.sc.inputs.send_msg(msg);

    e.preventDefault();
}

function handle_keydown(e)
{
    var key = new SpiceMsgcKeyDown(e)
    var msg = new SpiceMiniData();
    msg.build_msg(SPICE_MSGC_INPUTS_KEY_DOWN, key);
    if (this.sc && this.sc.inputs)
        this.sc.inputs.send_msg(msg);

    e.preventDefault();
}

function handle_keyup(e)
{
    var key = new SpiceMsgcKeyUp(e)
    var msg = new SpiceMiniData();
    msg.build_msg(SPICE_MSGC_INPUTS_KEY_UP, key);
    if (this.sc && this.sc.inputs)
        this.sc.inputs.send_msg(msg);

    e.preventDefault();
}
