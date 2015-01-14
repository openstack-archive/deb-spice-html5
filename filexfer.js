"use strict";
/*
   Copyright (C) 2014 Red Hat, Inc.

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

function SpiceFileXferTask(id, file)
{
    this.id = id;
    this.file = file;
}

function handle_file_dragover(e)
{
    e.stopPropagation();
    e.preventDefault();
    e.dataTransfer.dropEffect = 'copy';
}

function handle_file_drop(e)
{
    var sc = window.spice_connection;
    var files = e.dataTransfer.files;

    e.stopPropagation();
    e.preventDefault();
    for (var i = files.length - 1; i >= 0; i--)
    {
        if (files[i].type); // do not copy a directory
            sc.file_xfer_start(files[i]);
    }

}
