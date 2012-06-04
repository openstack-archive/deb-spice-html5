/*----------------------------------------------------------------------------
**  quic.c
**      This file was created initially by performing a gcc -E on the spice
**  quic code.  Utility functions were then added.  It is then passed through
**  emscripten to create an initial quic.js, which is also then mangled a bit
**  (see quic.shell), to create a quic.js we can use with our Javascript client.
**      FIXME:  Take this out back and kill it.
**--------------------------------------------------------------------------*/















typedef int ptrdiff_t;

typedef unsigned int size_t;

typedef int wchar_t;





































typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;

typedef int intptr_t;


typedef unsigned int uintptr_t;

__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;

























































extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));








typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;



extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));



extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));



extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));


extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__))

                        __attribute__ ((__nonnull__ (2)));

extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





















typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;





__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;


extern void *__rawmemchr (const void *__s, int __c);

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c1 (__const char *__s, int __reject);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c1 (__const char *__s, int __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c2 (__const char *__s, int __reject1,
         int __reject2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c2 (__const char *__s, int __reject1, int __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c3 (__const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c3 (__const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c1 (__const char *__s, int __accept);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c1 (__const char *__s, int __accept)
{
  register size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c2 (__const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c2 (__const char *__s, int __accept1, int __accept2)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c3 (__const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c3 (__const char *__s, int __accept1, int __accept2, int __accept3)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c2 (__const char *__s, int __accept1,
         int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c2 (__const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c3 (__const char *__s, int __accept1,
         int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c3 (__const char *__s, int __accept1, int __accept2,
       int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}

extern char *__strsep_g (char **__stringp, __const char *__delim);

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_1c (char **__s, char __reject);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}










extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));

extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));












typedef enum {
    QUIC_IMAGE_TYPE_INVALID,
    QUIC_IMAGE_TYPE_GRAY,
    QUIC_IMAGE_TYPE_RGB16,
    QUIC_IMAGE_TYPE_RGB24,
    QUIC_IMAGE_TYPE_RGB32,
    QUIC_IMAGE_TYPE_RGBA
} QuicImageType;




typedef void *QuicContext;

typedef struct QuicUsrContext QuicUsrContext;
struct QuicUsrContext {
    __attribute__((format(printf,2,3))) void (*error)(QuicUsrContext *usr, const char *fmt, ...);
    __attribute__((format(printf,2,3))) void (*warn)(QuicUsrContext *usr, const char *fmt, ...);
    __attribute__((format(printf,2,3))) void (*info)(QuicUsrContext *usr, const char *fmt, ...);
    void *(*malloc)(QuicUsrContext *usr, int size);
    void (*free)(QuicUsrContext *usr, void *ptr);
    int (*more_space)(QuicUsrContext *usr, uint32_t **io_ptr, int rows_completed);
    int (*more_lines)(QuicUsrContext *usr, uint8_t **lines);

};

int quic_encode(QuicContext *quic, QuicImageType type, int width, int height,
                uint8_t *lines, unsigned int num_lines, int stride,
                uint32_t *io_ptr, unsigned int num_io_words);

int quic_decode_begin(QuicContext *quic, uint32_t *io_ptr, unsigned int num_io_words,
                      QuicImageType *type, int *width, int *height);
int quic_decode(QuicContext *quic, QuicImageType type, uint8_t *buf, int stride);


QuicContext *quic_create(QuicUsrContext *usr);
void quic_destroy(QuicContext *quic);

void quic_init(void);














struct _IO_FILE;



typedef struct _IO_FILE FILE;






typedef struct _IO_FILE __FILE;













typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;


typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));




typedef __builtin_va_list __gnuc_va_list;


struct _IO_jump_t; struct _IO_FILE;

typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;

};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};

struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;

  __off64_t _offset;

  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;

typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);

extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);

extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));

extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));





typedef __gnuc_va_list va_list;

typedef __off_t off_t;

typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;










extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;

extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;

extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);


extern int fflush_unlocked (FILE *__stream);







extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;



extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;

extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));


extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__))

                      ;









extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));

extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));










extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);


extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);

extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);


extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;


extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);


extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);


extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;







extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);





extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);








extern int sys_nerr;
extern __const char *__const sys_errlist[];





extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));

extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}

























typedef __clock_t clock_t;






typedef __time_t time_t;




typedef __clockid_t clockid_t;

typedef __timer_t timer_t;

struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };








struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;





typedef __pid_t pid_t;








extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));


extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__));




extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));

extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));



















union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };


typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));



typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;



extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__)) atof (__const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__)) atoi (__const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__)) atol (__const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__)) atoll (__const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}


extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;












typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;

typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;

typedef __id_t id_t;

typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;






typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;

typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));









typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;




typedef __sigset_t sigset_t;









struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;

typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;



extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);

extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);








__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;



typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;











extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));














extern void *alloca (size_t __size) __attribute__ ((__nothrow__));












extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));

extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;

extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;

extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;






extern int system (__const char *__command) ;


extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);




extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;


extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;

extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));














void spice_backtrace(void);












typedef enum {
    SPICE_LOG_LEVEL_ERROR,
    SPICE_LOG_LEVEL_CRITICAL,
    SPICE_LOG_LEVEL_WARNING,
    SPICE_LOG_LEVEL_INFO,
    SPICE_LOG_LEVEL_DEBUG,
} SpiceLogLevel;

void spice_logv(const char *log_domain,
                SpiceLogLevel log_level,
                const char *strloc,
                const char *function,
                const char *format,
                va_list args) __attribute__((format(printf,5,0)));

void spice_log(const char *log_domain,
               SpiceLogLevel log_level,
               const char *strloc,
               const char *function,
               const char *format,
               ...) __attribute__((format(printf,5,6)));









static inline int spice_bit_find_msb(unsigned int val)
{
    int ret;

    asm ("bsrl %1,%0\n\t"
         "jnz 1f\n\t"
         "movl $-1,%0\n"
         "1:"
         : "=r"(ret) : "r"(val));
    return ret + 1;
}

static inline int spice_bit_next_pow2(unsigned int val)
{
    if ((val & (val - 1)) == 0) {
        return val;
    }
    return 1 << spice_bit_find_msb(val);
}




typedef uint8_t BYTE;

typedef struct QuicFamily {
    unsigned int nGRcodewords[8];

    unsigned int notGRcwlen[8];

    unsigned int notGRprefixmask[8];

    unsigned int notGRsuffixlen[8];




    BYTE xlatU2L[256];



    unsigned int xlatL2U[256];
} QuicFamily;

static QuicFamily family_8bpc;
static QuicFamily family_5bpc;

typedef unsigned COUNTER;

typedef struct s_bucket {
    COUNTER *pcounters;
    unsigned int bestcode;
} s_bucket;

typedef struct Encoder Encoder;

typedef struct CommonState {
    Encoder *encoder;

    unsigned int waitcnt;
    unsigned int tabrand_seed;
    unsigned int wm_trigger;
    unsigned int wmidx;
    unsigned int wmileft;


    int melcstate;

    int melclen;






    unsigned long melcorder;

} CommonState;




typedef struct FamilyStat {
    s_bucket **buckets_ptrs;
    s_bucket *buckets_buf;
    COUNTER *counters;
} FamilyStat;

typedef struct Channel {
    Encoder *encoder;

    int correlate_row_width;
    BYTE *correlate_row;

    s_bucket **_buckets_ptrs;

    FamilyStat family_stat_8bpc;
    FamilyStat family_stat_5bpc;

    CommonState state;
} Channel;

struct Encoder {
    QuicUsrContext *usr;
    QuicImageType type;
    unsigned int width;
    unsigned int height;
    unsigned int num_channels;

    unsigned int n_buckets_8bpc;
    unsigned int n_buckets_5bpc;

    unsigned int io_available_bits;
    uint32_t io_word;
    uint32_t io_next_word;
    uint32_t *io_now;
    uint32_t *io_end;
    uint32_t io_words_count;

    int rows_completed;

    Channel channels[4];

    CommonState rgb_state;
};


static int wmimax = 6;


static int wminext = 2048;


static int evol = 3;


static const unsigned long int bppmask[33] = {
    0x00000000,
    0x00000001, 0x00000003, 0x00000007, 0x0000000f,
    0x0000001f, 0x0000003f, 0x0000007f, 0x000000ff,
    0x000001ff, 0x000003ff, 0x000007ff, 0x00000fff,
    0x00001fff, 0x00003fff, 0x00007fff, 0x0000ffff,
    0x0001ffff, 0x0003ffff, 0x0007ffff, 0x000fffff,
    0x001fffff, 0x003fffff, 0x007fffff, 0x00ffffff,
    0x01ffffff, 0x03ffffff, 0x07ffffff, 0x0fffffff,
    0x1fffffff, 0x3fffffff, 0x7fffffff, 0xffffffff
};

static const unsigned int bitat[32] = {
    0x00000001, 0x00000002, 0x00000004, 0x00000008,
    0x00000010, 0x00000020, 0x00000040, 0x00000080,
    0x00000100, 0x00000200, 0x00000400, 0x00000800,
    0x00001000, 0x00002000, 0x00004000, 0x00008000,
    0x00010000, 0x00020000, 0x00040000, 0x00080000,
    0x00100000, 0x00200000, 0x00400000, 0x00800000,
    0x01000000, 0x02000000, 0x04000000, 0x08000000,
    0x10000000, 0x20000000, 0x40000000, 0x80000000
};





static const unsigned int tabrand_chaos[256] = {
    0x02c57542, 0x35427717, 0x2f5a2153, 0x9244f155, 0x7bd26d07, 0x354c6052, 0x57329b28, 0x2993868e,
    0x6cd8808c, 0x147b46e0, 0x99db66af, 0xe32b4cac, 0x1b671264, 0x9d433486, 0x62a4c192, 0x06089a4b,
    0x9e3dce44, 0xdaabee13, 0x222425ea, 0xa46f331d, 0xcd589250, 0x8bb81d7f, 0xc8b736b9, 0x35948d33,
    0xd7ac7fd0, 0x5fbe2803, 0x2cfbc105, 0x013dbc4e, 0x7a37820f, 0x39f88e9e, 0xedd58794, 0xc5076689,
    0xfcada5a4, 0x64c2f46d, 0xb3ba3243, 0x8974b4f9, 0x5a05aebd, 0x20afcd00, 0x39e2b008, 0x88a18a45,
    0x600bde29, 0xf3971ace, 0xf37b0a6b, 0x7041495b, 0x70b707ab, 0x06beffbb, 0x4206051f, 0xe13c4ee3,
    0xc1a78327, 0x91aa067c, 0x8295f72a, 0x732917a6, 0x1d871b4d, 0x4048f136, 0xf1840e7e, 0x6a6048c1,
    0x696cb71a, 0x7ff501c3, 0x0fc6310b, 0x57e0f83d, 0x8cc26e74, 0x11a525a2, 0x946934c7, 0x7cd888f0,
    0x8f9d8604, 0x4f86e73b, 0x04520316, 0xdeeea20c, 0xf1def496, 0x67687288, 0xf540c5b2, 0x22401484,
    0x3478658a, 0xc2385746, 0x01979c2c, 0x5dad73c8, 0x0321f58b, 0xf0fedbee, 0x92826ddf, 0x284bec73,
    0x5b1a1975, 0x03df1e11, 0x20963e01, 0xa17cf12b, 0x740d776e, 0xa7a6bf3c, 0x01b5cce4, 0x1118aa76,
    0xfc6fac0a, 0xce927e9b, 0x00bf2567, 0x806f216c, 0xbca69056, 0x795bd3e9, 0xc9dc4557, 0x8929b6c2,
    0x789d52ec, 0x3f3fbf40, 0xb9197368, 0xa38c15b5, 0xc3b44fa8, 0xca8333b0, 0xb7e8d590, 0xbe807feb,
    0xbf5f8360, 0xd99e2f5c, 0x372928e1, 0x7c757c4c, 0x0db5b154, 0xc01ede02, 0x1fc86e78, 0x1f3985be,
    0xb4805c77, 0x00c880fa, 0x974c1b12, 0x35ab0214, 0xb2dc840d, 0x5b00ae37, 0xd313b026, 0xb260969d,
    0x7f4c8879, 0x1734c4d3, 0x49068631, 0xb9f6a021, 0x6b863e6f, 0xcee5debf, 0x29f8c9fb, 0x53dd6880,
    0x72b61223, 0x1f67a9fd, 0x0a0f6993, 0x13e59119, 0x11cca12e, 0xfe6b6766, 0x16b6effc, 0x97918fc4,
    0xc2b8a563, 0x94f2f741, 0x0bfa8c9a, 0xd1537ae8, 0xc1da349c, 0x873c60ca, 0x95005b85, 0x9b5c080e,
    0xbc8abbd9, 0xe1eab1d2, 0x6dac9070, 0x4ea9ebf1, 0xe0cf30d4, 0x1ef5bd7b, 0xd161043e, 0x5d2fa2e2,
    0xff5d3cae, 0x86ed9f87, 0x2aa1daa1, 0xbd731a34, 0x9e8f4b22, 0xb1c2c67a, 0xc21758c9, 0xa182215d,
    0xccb01948, 0x8d168df7, 0x04238cfe, 0x368c3dbc, 0x0aeadca5, 0xbad21c24, 0x0a71fee5, 0x9fc5d872,
    0x54c152c6, 0xfc329483, 0x6783384a, 0xeddb3e1c, 0x65f90e30, 0x884ad098, 0xce81675a, 0x4b372f7d,
    0x68bf9a39, 0x43445f1e, 0x40f8d8cb, 0x90d5acb6, 0x4cd07282, 0x349eeb06, 0x0c9d5332, 0x520b24ef,
    0x80020447, 0x67976491, 0x2f931ca3, 0xfe9b0535, 0xfcd30220, 0x61a9e6cc, 0xa487d8d7, 0x3f7c5dd1,
    0x7d0127c5, 0x48f51d15, 0x60dea871, 0xc9a91cb7, 0x58b53bb3, 0x9d5e0b2d, 0x624a78b4, 0x30dbee1b,
    0x9bdf22e7, 0x1df5c299, 0x2d5643a7, 0xf4dd35ff, 0x03ca8fd6, 0x53b47ed8, 0x6f2c19aa, 0xfeb0c1f4,
    0x49e54438, 0x2f2577e6, 0xbf876969, 0x72440ea9, 0xfa0bafb8, 0x74f5b3a0, 0x7dd357cd, 0x89ce1358,
    0x6ef2cdda, 0x1e7767f3, 0xa6be9fdb, 0x4f5f88f8, 0xba994a3a, 0x08ca6b65, 0xe0893818, 0x9e00a16a,
    0xf42bfc8f, 0x9972eedc, 0x749c8b51, 0x32c05f5e, 0xd706805f, 0x6bfbb7cf, 0xd9210a10, 0x31a1db97,
    0x923a9559, 0x37a7a1f6, 0x059f8861, 0xca493e62, 0x65157e81, 0x8f6467dd, 0xab85ff9f, 0x9331aff2,
    0x8616b9f5, 0xedbd5695, 0xee7e29b1, 0x313ac44f, 0xb903112f, 0x432ef649, 0xdc0a36c0, 0x61cf2bba,
    0x81474925, 0xa8b6c7ad, 0xee5931de, 0xb2f8158d, 0x59fb7409, 0x2e3dfaed, 0x9af25a3f, 0xe1fed4d5,
};

static unsigned int stabrand(void)
{



    return 0x0ff;
}

static unsigned int tabrand(unsigned int *tabrand_seed)
{
    return tabrand_chaos[++*tabrand_seed & 0x0ff];
}

static const unsigned short besttrigtab[3][11] = {

            { 550, 900, 800, 700, 500, 350, 300, 200, 180, 180, 160},
            { 110, 550, 900, 800, 550, 400, 350, 250, 140, 160, 140},
            { 100, 120, 550, 900, 700, 500, 400, 300, 220, 250, 160}
};


static void set_wm_trigger(CommonState *state)
{
    unsigned int wm = state->wmidx;
    if (wm > 10) {
        wm = 10;
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (evol < 6) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "269", __FUNCTION__, "assertion `%s' failed","evol < 6"); } while (0); } } while (0);

    state->wm_trigger = besttrigtab[evol / 2][wm];

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (state->wm_trigger <= 2000) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "273", __FUNCTION__, "assertion `%s' failed","state->wm_trigger <= 2000"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (state->wm_trigger >= 1) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "274", __FUNCTION__, "assertion `%s' failed","state->wm_trigger >= 1"); } while (0); } } while (0);
}

static int ceil_log_2(int val)
{
    int result;



    if (val == 1) {
        return 0;
    }

    result = 1;
    val -= 1;
    while (val >>= 1) {
        result++;
    }

    return result;
}


static const BYTE lzeroes[256] = {
    8, 7, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};


static unsigned int cnt_l_zeroes(const unsigned int bits)
{
    if (bits & 0xff800000) {
        return lzeroes[bits >> 24];
    } else if (bits & 0xffff8000) {
        return 8 + lzeroes[(bits >> 16) & 0x000000ff];
    } else if (bits & 0xffffff80) {
        return 16 + lzeroes[(bits >> 8) & 0x000000ff];
    } else {
        return 24 + lzeroes[bits & 0x000000ff];
    }
}







static unsigned int golomb_code_len_8bpc(const BYTE n, const unsigned int l)
{
    if (n < family_8bpc.nGRcodewords[l]) {
        return (n >> l) + 1 + l;
    } else {
        return family_8bpc.notGRcwlen[l];
    }
}

static void golomb_coding_8bpc(const BYTE n, const unsigned int l, unsigned int * const codeword,
                                 unsigned int * const codewordlen)
{
    if (n < family_8bpc.nGRcodewords[l]) {
        (*codeword) = bitat[l] | (n & bppmask[l]);
        (*codewordlen) = (n >> l) + l + 1;
    } else {
        (*codeword) = n - family_8bpc.nGRcodewords[l];
        (*codewordlen) = family_8bpc.notGRcwlen[l];
    }
}

static unsigned int golomb_decoding_8bpc(const unsigned int l, const unsigned int bits,
                                           unsigned int * const codewordlen)
{
    if (bits > family_8bpc.notGRprefixmask[l]) {
        const unsigned int zeroprefix = cnt_l_zeroes(bits);
        const unsigned int cwlen = zeroprefix + 1 + l;
        (*codewordlen) = cwlen;
        return (zeroprefix << l) | ((bits >> (32 - cwlen)) & bppmask[l]);
    } else {
        const unsigned int cwlen = family_8bpc.notGRcwlen[l];
        (*codewordlen) = cwlen;
        return family_8bpc.nGRcodewords[l] + ((bits) >> (32 - cwlen) &
                                                bppmask[family_8bpc.notGRsuffixlen[l]]);
    }
}


static void update_model_8bpc(CommonState *state, s_bucket * const bucket,
                                const BYTE curval, unsigned int bpp)
{
    COUNTER * const pcounters = bucket->pcounters;
    unsigned int i;
    unsigned int bestcode;
    unsigned int bestcodelen;




    bestcode = bpp - 1;
    bestcodelen = (pcounters[bestcode] += golomb_code_len_8bpc(curval, bestcode));

    for (i = bpp - 2; i < bpp; i--) {
        const unsigned int ithcodelen = (pcounters[i] += golomb_code_len_8bpc(curval, i));

        if (ithcodelen < bestcodelen) {
            bestcode = i;
            bestcodelen = ithcodelen;
        }
    }

    bucket->bestcode = bestcode;

    if (bestcodelen > state->wm_trigger) {
        for (i = 0; i < bpp; i++) {
            pcounters[i] >>= 1;
        }
    }
}

static s_bucket *find_bucket_8bpc(Channel *channel, const unsigned int val)
{
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (val < (0x1U << 8)) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_family_tmpl.c" ":" "110", __FUNCTION__, "assertion `%s' failed","val < (0x1U << BPC)"); } while (0); } } while (0);

    return channel->_buckets_ptrs[val];
}









static unsigned int golomb_code_len_5bpc(const BYTE n, const unsigned int l)
{
    if (n < family_5bpc.nGRcodewords[l]) {
        return (n >> l) + 1 + l;
    } else {
        return family_5bpc.notGRcwlen[l];
    }
}

static void golomb_coding_5bpc(const BYTE n, const unsigned int l, unsigned int * const codeword,
                                 unsigned int * const codewordlen)
{
    if (n < family_5bpc.nGRcodewords[l]) {
        (*codeword) = bitat[l] | (n & bppmask[l]);
        (*codewordlen) = (n >> l) + l + 1;
    } else {
        (*codeword) = n - family_5bpc.nGRcodewords[l];
        (*codewordlen) = family_5bpc.notGRcwlen[l];
    }
}

static unsigned int golomb_decoding_5bpc(const unsigned int l, const unsigned int bits,
                                           unsigned int * const codewordlen)
{
    if (bits > family_5bpc.notGRprefixmask[l]) {
        const unsigned int zeroprefix = cnt_l_zeroes(bits);
        const unsigned int cwlen = zeroprefix + 1 + l;
        (*codewordlen) = cwlen;
        return (zeroprefix << l) | ((bits >> (32 - cwlen)) & bppmask[l]);
    } else {
        const unsigned int cwlen = family_5bpc.notGRcwlen[l];
        (*codewordlen) = cwlen;
        return family_5bpc.nGRcodewords[l] + ((bits) >> (32 - cwlen) &
                                                bppmask[family_5bpc.notGRsuffixlen[l]]);
    }
}


static void update_model_5bpc(CommonState *state, s_bucket * const bucket,
                                const BYTE curval, unsigned int bpp)
{
    COUNTER * const pcounters = bucket->pcounters;
    unsigned int i;
    unsigned int bestcode;
    unsigned int bestcodelen;




    bestcode = bpp - 1;
    bestcodelen = (pcounters[bestcode] += golomb_code_len_5bpc(curval, bestcode));

    for (i = bpp - 2; i < bpp; i--) {
        const unsigned int ithcodelen = (pcounters[i] += golomb_code_len_5bpc(curval, i));

        if (ithcodelen < bestcodelen) {
            bestcode = i;
            bestcodelen = ithcodelen;
        }
    }

    bucket->bestcode = bestcode;

    if (bestcodelen > state->wm_trigger) {
        for (i = 0; i < bpp; i++) {
            pcounters[i] >>= 1;
        }
    }
}

static s_bucket *find_bucket_5bpc(Channel *channel, const unsigned int val)
{
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (val < (0x1U << 5)) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_family_tmpl.c" ":" "110", __FUNCTION__, "assertion `%s' failed","val < (0x1U << BPC)"); } while (0); } } while (0);

    return channel->_buckets_ptrs[val];
}



static void decorelate_init(QuicFamily *family, int bpc)
{
    const unsigned int pixelbitmask = bppmask[bpc];
    const unsigned int pixelbitmaskshr = pixelbitmask >> 1;
    unsigned int s;



    for (s = 0; s <= pixelbitmask; s++) {
        if (s <= pixelbitmaskshr) {
            family->xlatU2L[s] = s << 1;
        } else {
            family->xlatU2L[s] = ((pixelbitmask - s) << 1) + 1;
        }
    }
}

static void corelate_init(QuicFamily *family, int bpc)
{
    const unsigned long int pixelbitmask = bppmask[bpc];
    unsigned long int s;



    for (s = 0; s <= pixelbitmask; s++) {
        if (s & 0x01) {
            family->xlatL2U[s] = pixelbitmask - (s >> 1);
        } else {
            family->xlatL2U[s] = (s >> 1);
        }
    }
}

static void family_init(QuicFamily *family, int bpc, int limit)
{
    int l;

    for (l = 0; l < bpc; l++) {
        int altprefixlen, altcodewords;

        altprefixlen = limit - bpc;
        if (altprefixlen > (int)(bppmask[bpc - l])) {
            altprefixlen = bppmask[bpc - l];
        }

        altcodewords = bppmask[bpc] + 1 - (altprefixlen << l);

        family->nGRcodewords[l] = (altprefixlen << l);
        family->notGRcwlen[l] = altprefixlen + ceil_log_2(altcodewords);
        family->notGRprefixmask[l] = bppmask[32 - altprefixlen];
        family->notGRsuffixlen[l] = ceil_log_2(altcodewords);
    }

    decorelate_init(family, bpc);
    corelate_init(family, bpc);
}

static void more_io_words(Encoder *encoder)
{
    uint32_t *io_ptr;
    int num_io_words = encoder->usr->more_space(encoder->usr, &io_ptr, encoder->rows_completed);
    if (num_io_words <= 0) {
        encoder->usr->error(encoder->usr, "%s: no more words\n", __FUNCTION__);
    }
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (io_ptr) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "394", __FUNCTION__, "assertion `%s' failed","io_ptr"); } while (0); } } while (0);
    encoder->io_words_count += num_io_words;
    encoder->io_now = io_ptr;
    encoder->io_end = encoder->io_now + num_io_words;
}

static void __write_io_word(Encoder *encoder)
{
    more_io_words(encoder);
    *(encoder->io_now++) = encoder->io_word;
}

static void (*__write_io_word_ptr)(Encoder *encoder) = __write_io_word;

static inline void write_io_word(Encoder *encoder)
{
    if (encoder->io_now == encoder->io_end) {
        __write_io_word_ptr(encoder);
        return;
    }
    *(encoder->io_now++) = encoder->io_word;
}

static inline void encode(Encoder *encoder, unsigned int word, unsigned int len)
{
    int delta;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (len > 0 && len < 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "421", __FUNCTION__, "assertion `%s' failed","len > 0 && len < 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (!(word & ~bppmask[len])) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "422", __FUNCTION__, "assertion `%s' failed","!(word & ~bppmask[len])"); } while (0); } } while (0);
    if ((delta = ((int)encoder->io_available_bits - len)) >= 0) {
        encoder->io_available_bits = delta;
        encoder->io_word |= word << encoder->io_available_bits;
        return;
    }
    delta = -delta;
    encoder->io_word |= word >> delta;
    write_io_word(encoder);
    encoder->io_available_bits = 32 - delta;
    encoder->io_word = word << encoder->io_available_bits;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->io_available_bits < 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "434", __FUNCTION__, "assertion `%s' failed","encoder->io_available_bits < 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((encoder->io_word & bppmask[encoder->io_available_bits]) == 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "435", __FUNCTION__, "assertion `%s' failed","(encoder->io_word & bppmask[encoder->io_available_bits]) == 0"); } while (0); } } while (0);
}

static inline void encode_32(Encoder *encoder, unsigned int word)
{
    encode(encoder, word >> 16, 16);
    encode(encoder, word & 0x0000ffff, 16);
}

static inline void flush(Encoder *encoder)
{
    if (encoder->io_available_bits > 0 && encoder->io_available_bits != 32) {
        encode(encoder, 0, encoder->io_available_bits);
    }
    encode_32(encoder, 0);
    encode(encoder, 0, 1);
}

static void __read_io_word(Encoder *encoder)
{
    more_io_words(encoder);
    encoder->io_next_word = *(encoder->io_now++);
}

static void (*__read_io_word_ptr)(Encoder *encoder) = __read_io_word;


static inline void read_io_word(Encoder *encoder)
{
    if (encoder->io_now == encoder->io_end) {
        __read_io_word_ptr(encoder);
        return;
    }
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->io_now < encoder->io_end) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "468", __FUNCTION__, "assertion `%s' failed","encoder->io_now < encoder->io_end"); } while (0); } } while (0);
    encoder->io_next_word = *(encoder->io_now++);
}

static inline void decode_eatbits(Encoder *encoder, int len)
{
    int delta;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (len > 0 && len < 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "476", __FUNCTION__, "assertion `%s' failed","len > 0 && len < 32"); } while (0); } } while (0);
    encoder->io_word <<= len;

    if ((delta = ((int)encoder->io_available_bits - len)) >= 0) {
        encoder->io_available_bits = delta;
        encoder->io_word |= encoder->io_next_word >> encoder->io_available_bits;
        return;
    }

    delta = -delta;
    encoder->io_word |= encoder->io_next_word << delta;
    read_io_word(encoder);
    encoder->io_available_bits = 32 - delta;
    encoder->io_word |= (encoder->io_next_word >> encoder->io_available_bits);
}

static inline void decode_eat32bits(Encoder *encoder)
{
    decode_eatbits(encoder, 16);
    decode_eatbits(encoder, 16);
}





static inline void encode_ones(Encoder *encoder, unsigned int n)
{
    unsigned int count;

    for (count = n >> 5; count; count--) {
        encode(encoder, ~0U, 32);
    }

    if ((n &= 0x1f)) {
        encode(encoder, (1U << n) - 1, n);
    }
}



static int zeroLUT[256];

static int J[32] = {
    0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7,
    7, 8, 9, 10, 11, 12, 13, 14, 15
};


static void init_zeroLUT(void)
{
    int i, j, k, l;

    j = k = 1;
    l = 8;
    for (i = 0; i < 256; ++i) {
        zeroLUT[i] = l;
        --k;
        if (k == 0) {
            k = j;
            --l;
            j *= 2;
        }
    }
}

static void encoder_init_rle(CommonState *state)
{
    state->melcstate = 0;
    state->melclen = J[0];
    state->melcorder = 1 << state->melclen;
}



static void encode_run(Encoder *encoder, unsigned int runlen)
{
    int hits = 0;

    while (runlen >= encoder->rgb_state.melcorder) {
        hits++;
        runlen -= encoder->rgb_state.melcorder;
        if (encoder->rgb_state.melcstate < 32) {
            encoder->rgb_state.melclen = J[++encoder->rgb_state.melcstate];
            encoder->rgb_state.melcorder = (1L << encoder->rgb_state.melclen);
        }
    }






    encode_ones(encoder, hits);

    encode(encoder, runlen, encoder->rgb_state.melclen + 1);


    if (encoder->rgb_state.melcstate) {
        encoder->rgb_state.melclen = J[--encoder->rgb_state.melcstate];
        encoder->rgb_state.melcorder = (1L << encoder->rgb_state.melclen);
    }
}



static void encode_channel_run(Encoder *encoder, Channel *channel, unsigned int runlen)
{

    int hits = 0;

    while (runlen >= channel->state.melcorder) {
        hits++;
        runlen -= channel->state.melcorder;
        if (channel->state.melcstate < 32) {
            channel->state.melclen = J[++channel->state.melcstate];
            channel->state.melcorder = (1L << channel->state.melclen);
        }
    }






    encode_ones(encoder, hits);

    encode(encoder, runlen, channel->state.melclen + 1);


    if (channel->state.melcstate) {
        channel->state.melclen = J[--channel->state.melcstate];
        channel->state.melcorder = (1L << channel->state.melclen);
    }
}





static int decode_run(Encoder *encoder)
{
    int runlen = 0;

    do {
        register int temp, hits;
        temp = zeroLUT[(BYTE)(~(encoder->io_word >> 24))];

        for (hits = 1; hits <= temp; hits++) {
            runlen += encoder->rgb_state.melcorder;

            if (encoder->rgb_state.melcstate < 32) {
                encoder->rgb_state.melclen = J[++encoder->rgb_state.melcstate];
                encoder->rgb_state.melcorder = (1U << encoder->rgb_state.melclen);
            }
        }
        if (temp != 8) {
            decode_eatbits(encoder, temp + 1);

            break;
        }
        decode_eatbits(encoder, 8);
    } while (1);


    if (encoder->rgb_state.melclen) {
        runlen += encoder->io_word >> (32 - encoder->rgb_state.melclen);
        decode_eatbits(encoder, encoder->rgb_state.melclen);
    }


    if (encoder->rgb_state.melcstate) {
        encoder->rgb_state.melclen = J[--encoder->rgb_state.melcstate];
        encoder->rgb_state.melcorder = (1U << encoder->rgb_state.melclen);
    }

    return runlen;
}



static int decode_channel_run(Encoder *encoder, Channel *channel)
{
    int runlen = 0;

    do {
        register int temp, hits;
        temp = zeroLUT[(BYTE)(~(encoder->io_word >> 24))];

        for (hits = 1; hits <= temp; hits++) {
            runlen += channel->state.melcorder;

            if (channel->state.melcstate < 32) {
                channel->state.melclen = J[++channel->state.melcstate];
                channel->state.melcorder = (1U << channel->state.melclen);
            }
        }
        if (temp != 8) {
            decode_eatbits(encoder, temp + 1);

            break;
        }
        decode_eatbits(encoder, 8);
    } while (1);


    if (channel->state.melclen) {
        runlen += encoder->io_word >> (32 - channel->state.melclen);
        decode_eatbits(encoder, channel->state.melclen);
    }


    if (channel->state.melcstate) {
        channel->state.melclen = J[--channel->state.melcstate];
        channel->state.melcorder = (1U << channel->state.melclen);
    }

    return runlen;
}

static inline void init_decode_io(Encoder *encoder)
{
    encoder->io_next_word = encoder->io_word = *(encoder->io_now++);
    encoder->io_available_bits = 0;
}

typedef struct __attribute__ ((__packed__)) one_byte_pixel_t {
    BYTE a;
} one_byte_t;

typedef struct __attribute__ ((__packed__)) three_bytes_pixel_t {
    BYTE a;
    BYTE b;
    BYTE c;
} three_bytes_t;

typedef struct __attribute__ ((__packed__)) four_bytes_pixel_t {
    BYTE a;
    BYTE b;
    BYTE c;
    BYTE d;
} four_bytes_t;

typedef struct __attribute__ ((__packed__)) rgb32_pixel_t {
    BYTE b;
    BYTE g;
    BYTE r;
    BYTE pad;
} rgb32_pixel_t;

typedef struct __attribute__ ((__packed__)) rgb24_pixel_t {
    BYTE b;
    BYTE g;
    BYTE r;
} rgb24_pixel_t;

typedef uint16_t rgb16_pixel_t;






static inline BYTE quic_one_decorelate_0(const one_byte_t * const curr, const unsigned int bpc_mask)
{
    return family_8bpc.xlatU2L[(unsigned)((int)curr[0].a - (int)((unsigned int)curr[-1].a)) & bpc_mask];
}

static inline void quic_one_corelate_0(one_byte_t *curr, const BYTE corelate,
                                     const unsigned int bpc_mask)
{
    curr->a = (family_8bpc.xlatL2U[corelate] + ((unsigned int)curr[-1].a)) & bpc_mask;
}




static inline BYTE quic_one_decorelate(const one_byte_t *const prev, const one_byte_t * const curr,
                                     const unsigned int bpc_mask)
{
    return family_8bpc.xlatU2L[(unsigned)((int)curr->a - (int)((((unsigned int)curr[-1].a) + ((unsigned int)prev[0].a)) >> 1)) & bpc_mask];
}


static inline void quic_one_corelate(const one_byte_t *prev, one_byte_t *curr, const BYTE corelate,
                                   const unsigned int bpc_mask)
{
    curr->a = (family_8bpc.xlatL2U[corelate] + (int)((((unsigned int)curr[-1].a) + ((unsigned int)prev[0].a)) >> 1)) & bpc_mask;
}

static void quic_one_compress_row0_seg(Encoder *encoder, Channel *channel, int i,
                                     const one_byte_t * const cur_row,
                                     const int end,
                                     const unsigned int waitmask,
                                     const unsigned int bpc,
                                     const unsigned int bpc_mask)
{
    BYTE * const decorelate_drow = channel->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "161", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (i == 0) {
        unsigned int codeword, codewordlen;

        decorelate_drow[0] = family_8bpc.xlatU2L[cur_row->a];
        golomb_coding_8bpc(decorelate_drow[0], find_bucket_8bpc(channel, decorelate_drow[-1])->bestcode,
                      &codeword, &codewordlen);
        encode(encoder, codeword, codewordlen);

        if (channel->state.waitcnt) {
            channel->state.waitcnt--;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[-1]),
                         decorelate_drow[i], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codeword, codewordlen;
            decorelate_drow[i] = quic_one_decorelate_0(&cur_row[i], bpc_mask);
            golomb_coding_8bpc(decorelate_drow[i],
                          find_bucket_8bpc(channel, decorelate_drow[i - 1])->bestcode, &codeword,
                          &codewordlen);
            encode(encoder, codeword, codewordlen);
        }

        update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[stopidx - 1]),
                     decorelate_drow[stopidx], bpc);
        stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codeword, codewordlen;
        decorelate_drow[i] = quic_one_decorelate_0(&cur_row[i], bpc_mask);
        golomb_coding_8bpc(decorelate_drow[i], find_bucket_8bpc(channel, decorelate_drow[i - 1])->bestcode,
                      &codeword, &codewordlen);
        encode(encoder, codeword, codewordlen);
    }
    channel->state.waitcnt = stopidx - end;
}

static void quic_one_compress_row0(Encoder *encoder, Channel *channel, const one_byte_t *cur_row,
                                 unsigned int width)
{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_one_compress_row0_seg(encoder, channel, pos, cur_row, pos + channel->state.wmileft,
                                     bppmask[channel->state.wmidx], bpc, bpc_mask);
            width -= channel->state.wmileft;
            pos += channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_one_compress_row0_seg(encoder, channel, pos, cur_row, pos + width,
                                 bppmask[channel->state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "236", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "237", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "238", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_one_compress_row_seg(Encoder *encoder, Channel *channel, int i,
                                    const one_byte_t * const prev_row,
                                    const one_byte_t * const cur_row,
                                    const int end,
                                    const unsigned int waitmask,
                                    const unsigned int bpc,
                                    const unsigned int bpc_mask)
{
    BYTE * const decorelate_drow = channel->correlate_row;
    int stopidx;

    int run_index = 0;
    int run_size;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "256", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        decorelate_drow[0] = family_8bpc.xlatU2L[(unsigned)((int)cur_row->a -
                                                       (int)prev_row->a) & bpc_mask];

        golomb_coding_8bpc(decorelate_drow[0],
                      find_bucket_8bpc(channel, decorelate_drow[-1])->bestcode,
                      &codeword,
                      &codewordlen);
        encode(encoder, codeword, codewordlen);

        if (channel->state.waitcnt) {
            channel->state.waitcnt--;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[-1]),
                         decorelate_drow[0], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codeword, codewordlen;

                ;
                if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
                ;

                decorelate_drow[i] = quic_one_decorelate(&prev_row[i], &cur_row[i], bpc_mask);
                golomb_coding_8bpc(decorelate_drow[i],
                              find_bucket_8bpc(channel, decorelate_drow[i - 1])->bestcode, &codeword,
                              &codewordlen);
                encode(encoder, codeword, codewordlen);
            }

            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[stopidx - 1]),
                         decorelate_drow[stopidx], bpc);
            stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codeword, codewordlen;

            ;
            if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
            ;

            decorelate_drow[i] = quic_one_decorelate(&prev_row[i], &cur_row[i], bpc_mask);
            golomb_coding_8bpc(decorelate_drow[i], find_bucket_8bpc(channel,
                                                          decorelate_drow[i - 1])->bestcode,
                          &codeword, &codewordlen);
            encode(encoder, codeword, codewordlen);
        }
        channel->state.waitcnt = stopidx - end;

        return;


do_run:
        run_index = i;
        channel->state.waitcnt = stopidx - i;
        run_size = 0;

        while (cur_row[i].a == cur_row[i - 1].a) {
            run_size++;
            if (++i == end) {

                encode_channel_run(encoder, channel, run_size);



                return;
            }
        }

        encode_channel_run(encoder, channel, run_size);



        stopidx = i + channel->state.waitcnt;

    }
}

static void quic_one_compress_row(Encoder *encoder, Channel *channel,
                                const one_byte_t * const prev_row,
                                const one_byte_t * const cur_row,
                                unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_one_compress_row_seg(encoder, channel, pos, prev_row, cur_row,
                                    pos + channel->state.wmileft, bppmask[channel->state.wmidx],
                                    bpc, bpc_mask);
            width -= channel->state.wmileft;
            pos += channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_one_compress_row_seg(encoder, channel, pos, prev_row, cur_row, pos + width,
                                bppmask[channel->state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "378", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "379", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "380", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_one_uncompress_row0_seg(Encoder *encoder, Channel *channel, int i,
                                       BYTE * const correlate_row,
                                       one_byte_t * const cur_row,
                                       const int end,
                                       const unsigned int waitmask,
                                       const unsigned int bpc,
                                       const unsigned int bpc_mask)
{
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "393", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (i == 0) {
        unsigned int codewordlen;

        correlate_row[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel,
                                                             correlate_row[-1])->bestcode,
                                                 encoder->io_word, &codewordlen);
        cur_row[0].a = (BYTE)family_8bpc.xlatL2U[correlate_row[0]];
        decode_eatbits(encoder, codewordlen);

        if (channel->state.waitcnt) {
            --channel->state.waitcnt;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, correlate_row[-1]),
                         correlate_row[0], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }

    while (stopidx < end) {
        struct s_bucket * pbucket = ((void *)0);

        for (; i <= stopidx; i++) {
            unsigned int codewordlen;

            pbucket = find_bucket_8bpc(channel, correlate_row[i - 1]);
            correlate_row[i] = (BYTE)golomb_decoding_8bpc(pbucket->bestcode, encoder->io_word,
                                                     &codewordlen);
            quic_one_corelate_0(&cur_row[i], correlate_row[i], bpc_mask);
            decode_eatbits(encoder, codewordlen);
        }

        update_model_8bpc(&channel->state, pbucket, correlate_row[stopidx], bpc);

        stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codewordlen;

        correlate_row[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel,
                                                             correlate_row[i - 1])->bestcode,
                                                 encoder->io_word, &codewordlen);
        quic_one_corelate_0(&cur_row[i], correlate_row[i], bpc_mask);
        decode_eatbits(encoder, codewordlen);
    }
    channel->state.waitcnt = stopidx - end;
}

static void quic_one_uncompress_row0(Encoder *encoder, Channel *channel,
                                   one_byte_t * const cur_row,
                                   unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    BYTE * const correlate_row = channel->correlate_row;
    unsigned int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_one_uncompress_row0_seg(encoder, channel, pos, correlate_row, cur_row,
                                       pos + channel->state.wmileft, bppmask[channel->state.wmidx],
                                       bpc, bpc_mask);
            pos += channel->state.wmileft;
            width -= channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_one_uncompress_row0_seg(encoder, channel, pos, correlate_row, cur_row, pos + width,
                                   bppmask[channel->state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "478", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "479", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "480", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_one_uncompress_row_seg(Encoder *encoder, Channel *channel,
                                      BYTE *correlate_row,
                                      const one_byte_t * const prev_row,
                                      one_byte_t * const cur_row,
                                      int i,
                                      const int end,
                                      const unsigned int bpc,
                                      const unsigned int bpc_mask)
{
    const unsigned int waitmask = bppmask[channel->state.wmidx];
    int stopidx;

    int run_index = 0;
    int run_end;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "499", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (i == 0) {
        unsigned int codewordlen;

        correlate_row[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel, correlate_row[-1])->bestcode,
                                                             encoder->io_word, &codewordlen);
        cur_row[0].a = (family_8bpc.xlatL2U[correlate_row[0]] + prev_row[0].a) & bpc_mask;
        decode_eatbits(encoder, codewordlen);

        if (channel->state.waitcnt) {
            --channel->state.waitcnt;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, correlate_row[-1]),
                         correlate_row[0], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            struct s_bucket * pbucket = ((void *)0);

            for (; i <= stopidx; i++) {
                unsigned int codewordlen;

                ;
                if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
                ;

                pbucket = find_bucket_8bpc(channel, correlate_row[i - 1]);
                correlate_row[i] = (BYTE)golomb_decoding_8bpc(pbucket->bestcode, encoder->io_word,
                                                         &codewordlen);
                quic_one_corelate(&prev_row[i], &cur_row[i], correlate_row[i], bpc_mask);
                decode_eatbits(encoder, codewordlen);
            }

            update_model_8bpc(&channel->state, pbucket, correlate_row[stopidx], bpc);

            stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codewordlen;

            ;
            if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
            ;

            correlate_row[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel,
                                                                 correlate_row[i - 1])->bestcode,
                                                     encoder->io_word, &codewordlen);
            quic_one_corelate(&prev_row[i], &cur_row[i], correlate_row[i], bpc_mask);
            decode_eatbits(encoder, codewordlen);
        }

        channel->state.waitcnt = stopidx - end;

        return;


do_run:
        channel->state.waitcnt = stopidx - i;
        run_index = i;

        run_end = i + decode_channel_run(encoder, channel);




        for (; i < run_end; i++) {
            cur_row[i].a = cur_row[i - 1].a;
        }

        if (i == end) {
            return;
        }

        stopidx = i + channel->state.waitcnt;

    }
}

static void quic_one_uncompress_row(Encoder *encoder, Channel *channel,
                                  const one_byte_t * const prev_row,
                                  one_byte_t * const cur_row,
                                  unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    BYTE * const correlate_row = channel->correlate_row;
    unsigned int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_one_uncompress_row_seg(encoder, channel, correlate_row, prev_row, cur_row, pos,
                                      pos + channel->state.wmileft, bpc, bpc_mask);
            pos += channel->state.wmileft;
            width -= channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_one_uncompress_row_seg(encoder, channel, correlate_row, prev_row, cur_row, pos,
                                  pos + width, bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "616", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "617", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "618", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}








static inline BYTE quic_four_decorelate_0(const four_bytes_t * const curr, const unsigned int bpc_mask)
{
    return family_8bpc.xlatU2L[(unsigned)((int)curr[0].a - (int)((unsigned int)curr[-1].a)) & bpc_mask];
}

static inline void quic_four_corelate_0(four_bytes_t *curr, const BYTE corelate,
                                     const unsigned int bpc_mask)
{
    curr->a = (family_8bpc.xlatL2U[corelate] + ((unsigned int)curr[-1].a)) & bpc_mask;
}




static inline BYTE quic_four_decorelate(const four_bytes_t *const prev, const four_bytes_t * const curr,
                                     const unsigned int bpc_mask)
{
    return family_8bpc.xlatU2L[(unsigned)((int)curr->a - (int)((((unsigned int)curr[-1].a) + ((unsigned int)prev[0].a)) >> 1)) & bpc_mask];
}


static inline void quic_four_corelate(const four_bytes_t *prev, four_bytes_t *curr, const BYTE corelate,
                                   const unsigned int bpc_mask)
{
    curr->a = (family_8bpc.xlatL2U[corelate] + (int)((((unsigned int)curr[-1].a) + ((unsigned int)prev[0].a)) >> 1)) & bpc_mask;
}

static void quic_four_compress_row0_seg(Encoder *encoder, Channel *channel, int i,
                                     const four_bytes_t * const cur_row,
                                     const int end,
                                     const unsigned int waitmask,
                                     const unsigned int bpc,
                                     const unsigned int bpc_mask)
{
    BYTE * const decorelate_drow = channel->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "161", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (i == 0) {
        unsigned int codeword, codewordlen;

        decorelate_drow[0] = family_8bpc.xlatU2L[cur_row->a];
        golomb_coding_8bpc(decorelate_drow[0], find_bucket_8bpc(channel, decorelate_drow[-1])->bestcode,
                      &codeword, &codewordlen);
        encode(encoder, codeword, codewordlen);

        if (channel->state.waitcnt) {
            channel->state.waitcnt--;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[-1]),
                         decorelate_drow[i], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codeword, codewordlen;
            decorelate_drow[i] = quic_four_decorelate_0(&cur_row[i], bpc_mask);
            golomb_coding_8bpc(decorelate_drow[i],
                          find_bucket_8bpc(channel, decorelate_drow[i - 1])->bestcode, &codeword,
                          &codewordlen);
            encode(encoder, codeword, codewordlen);
        }

        update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[stopidx - 1]),
                     decorelate_drow[stopidx], bpc);
        stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codeword, codewordlen;
        decorelate_drow[i] = quic_four_decorelate_0(&cur_row[i], bpc_mask);
        golomb_coding_8bpc(decorelate_drow[i], find_bucket_8bpc(channel, decorelate_drow[i - 1])->bestcode,
                      &codeword, &codewordlen);
        encode(encoder, codeword, codewordlen);
    }
    channel->state.waitcnt = stopidx - end;
}

static void quic_four_compress_row0(Encoder *encoder, Channel *channel, const four_bytes_t *cur_row,
                                 unsigned int width)
{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_four_compress_row0_seg(encoder, channel, pos, cur_row, pos + channel->state.wmileft,
                                     bppmask[channel->state.wmidx], bpc, bpc_mask);
            width -= channel->state.wmileft;
            pos += channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_four_compress_row0_seg(encoder, channel, pos, cur_row, pos + width,
                                 bppmask[channel->state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "236", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "237", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "238", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_four_compress_row_seg(Encoder *encoder, Channel *channel, int i,
                                    const four_bytes_t * const prev_row,
                                    const four_bytes_t * const cur_row,
                                    const int end,
                                    const unsigned int waitmask,
                                    const unsigned int bpc,
                                    const unsigned int bpc_mask)
{
    BYTE * const decorelate_drow = channel->correlate_row;
    int stopidx;

    int run_index = 0;
    int run_size;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "256", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        decorelate_drow[0] = family_8bpc.xlatU2L[(unsigned)((int)cur_row->a -
                                                       (int)prev_row->a) & bpc_mask];

        golomb_coding_8bpc(decorelate_drow[0],
                      find_bucket_8bpc(channel, decorelate_drow[-1])->bestcode,
                      &codeword,
                      &codewordlen);
        encode(encoder, codeword, codewordlen);

        if (channel->state.waitcnt) {
            channel->state.waitcnt--;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[-1]),
                         decorelate_drow[0], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codeword, codewordlen;

                ;
                if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
                ;

                decorelate_drow[i] = quic_four_decorelate(&prev_row[i], &cur_row[i], bpc_mask);
                golomb_coding_8bpc(decorelate_drow[i],
                              find_bucket_8bpc(channel, decorelate_drow[i - 1])->bestcode, &codeword,
                              &codewordlen);
                encode(encoder, codeword, codewordlen);
            }

            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, decorelate_drow[stopidx - 1]),
                         decorelate_drow[stopidx], bpc);
            stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codeword, codewordlen;

            ;
            if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
            ;

            decorelate_drow[i] = quic_four_decorelate(&prev_row[i], &cur_row[i], bpc_mask);
            golomb_coding_8bpc(decorelate_drow[i], find_bucket_8bpc(channel,
                                                          decorelate_drow[i - 1])->bestcode,
                          &codeword, &codewordlen);
            encode(encoder, codeword, codewordlen);
        }
        channel->state.waitcnt = stopidx - end;

        return;


do_run:
        run_index = i;
        channel->state.waitcnt = stopidx - i;
        run_size = 0;

        while (cur_row[i].a == cur_row[i - 1].a) {
            run_size++;
            if (++i == end) {

                encode_channel_run(encoder, channel, run_size);



                return;
            }
        }

        encode_channel_run(encoder, channel, run_size);



        stopidx = i + channel->state.waitcnt;

    }
}

static void quic_four_compress_row(Encoder *encoder, Channel *channel,
                                const four_bytes_t * const prev_row,
                                const four_bytes_t * const cur_row,
                                unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_four_compress_row_seg(encoder, channel, pos, prev_row, cur_row,
                                    pos + channel->state.wmileft, bppmask[channel->state.wmidx],
                                    bpc, bpc_mask);
            width -= channel->state.wmileft;
            pos += channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_four_compress_row_seg(encoder, channel, pos, prev_row, cur_row, pos + width,
                                bppmask[channel->state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "378", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "379", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "380", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_four_uncompress_row0_seg(Encoder *encoder, Channel *channel, int i,
                                       BYTE * const correlate_row,
                                       four_bytes_t * const cur_row,
                                       const int end,
                                       const unsigned int waitmask,
                                       const unsigned int bpc,
                                       const unsigned int bpc_mask)
{
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "393", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (i == 0) {
        unsigned int codewordlen;

        correlate_row[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel,
                                                             correlate_row[-1])->bestcode,
                                                 encoder->io_word, &codewordlen);
        cur_row[0].a = (BYTE)family_8bpc.xlatL2U[correlate_row[0]];
        decode_eatbits(encoder, codewordlen);

        if (channel->state.waitcnt) {
            --channel->state.waitcnt;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, correlate_row[-1]),
                         correlate_row[0], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }

    while (stopidx < end) {
        struct s_bucket * pbucket = ((void *)0);

        for (; i <= stopidx; i++) {
            unsigned int codewordlen;

            pbucket = find_bucket_8bpc(channel, correlate_row[i - 1]);
            correlate_row[i] = (BYTE)golomb_decoding_8bpc(pbucket->bestcode, encoder->io_word,
                                                     &codewordlen);
            quic_four_corelate_0(&cur_row[i], correlate_row[i], bpc_mask);
            decode_eatbits(encoder, codewordlen);
        }

        update_model_8bpc(&channel->state, pbucket, correlate_row[stopidx], bpc);

        stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codewordlen;

        correlate_row[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel,
                                                             correlate_row[i - 1])->bestcode,
                                                 encoder->io_word, &codewordlen);
        quic_four_corelate_0(&cur_row[i], correlate_row[i], bpc_mask);
        decode_eatbits(encoder, codewordlen);
    }
    channel->state.waitcnt = stopidx - end;
}

static void quic_four_uncompress_row0(Encoder *encoder, Channel *channel,
                                   four_bytes_t * const cur_row,
                                   unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    BYTE * const correlate_row = channel->correlate_row;
    unsigned int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_four_uncompress_row0_seg(encoder, channel, pos, correlate_row, cur_row,
                                       pos + channel->state.wmileft, bppmask[channel->state.wmidx],
                                       bpc, bpc_mask);
            pos += channel->state.wmileft;
            width -= channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_four_uncompress_row0_seg(encoder, channel, pos, correlate_row, cur_row, pos + width,
                                   bppmask[channel->state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "478", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "479", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "480", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_four_uncompress_row_seg(Encoder *encoder, Channel *channel,
                                      BYTE *correlate_row,
                                      const four_bytes_t * const prev_row,
                                      four_bytes_t * const cur_row,
                                      int i,
                                      const int end,
                                      const unsigned int bpc,
                                      const unsigned int bpc_mask)
{
    const unsigned int waitmask = bppmask[channel->state.wmidx];
    int stopidx;

    int run_index = 0;
    int run_end;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "499", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (i == 0) {
        unsigned int codewordlen;

        correlate_row[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel, correlate_row[-1])->bestcode,
                                                             encoder->io_word, &codewordlen);
        cur_row[0].a = (family_8bpc.xlatL2U[correlate_row[0]] + prev_row[0].a) & bpc_mask;
        decode_eatbits(encoder, codewordlen);

        if (channel->state.waitcnt) {
            --channel->state.waitcnt;
        } else {
            channel->state.waitcnt = (tabrand(&channel->state.tabrand_seed) & waitmask);
            update_model_8bpc(&channel->state, find_bucket_8bpc(channel, correlate_row[-1]),
                         correlate_row[0], bpc);
        }
        stopidx = ++i + channel->state.waitcnt;
    } else {
        stopidx = i + channel->state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            struct s_bucket * pbucket = ((void *)0);

            for (; i <= stopidx; i++) {
                unsigned int codewordlen;

                ;
                if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
                ;

                pbucket = find_bucket_8bpc(channel, correlate_row[i - 1]);
                correlate_row[i] = (BYTE)golomb_decoding_8bpc(pbucket->bestcode, encoder->io_word,
                                                         &codewordlen);
                quic_four_corelate(&prev_row[i], &cur_row[i], correlate_row[i], bpc_mask);
                decode_eatbits(encoder, codewordlen);
            }

            update_model_8bpc(&channel->state, pbucket, correlate_row[stopidx], bpc);

            stopidx = i + (tabrand(&channel->state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codewordlen;

            ;
            if (prev_row[i - 1].a == prev_row[i].a) { if (run_index != i && i > 2 && cur_row[i - 1].a == cur_row[i - 2].a) { goto do_run; } };
            ;

            correlate_row[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel,
                                                                 correlate_row[i - 1])->bestcode,
                                                     encoder->io_word, &codewordlen);
            quic_four_corelate(&prev_row[i], &cur_row[i], correlate_row[i], bpc_mask);
            decode_eatbits(encoder, codewordlen);
        }

        channel->state.waitcnt = stopidx - end;

        return;


do_run:
        channel->state.waitcnt = stopidx - i;
        run_index = i;

        run_end = i + decode_channel_run(encoder, channel);




        for (; i < run_end; i++) {
            cur_row[i].a = cur_row[i - 1].a;
        }

        if (i == end) {
            return;
        }

        stopidx = i + channel->state.waitcnt;

    }
}

static void quic_four_uncompress_row(Encoder *encoder, Channel *channel,
                                  const four_bytes_t * const prev_row,
                                  four_bytes_t * const cur_row,
                                  unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    BYTE * const correlate_row = channel->correlate_row;
    unsigned int pos = 0;

    while ((wmimax > (int)channel->state.wmidx) && (channel->state.wmileft <= width)) {
        if (channel->state.wmileft) {
            quic_four_uncompress_row_seg(encoder, channel, correlate_row, prev_row, cur_row, pos,
                                      pos + channel->state.wmileft, bpc, bpc_mask);
            pos += channel->state.wmileft;
            width -= channel->state.wmileft;
        }

        channel->state.wmidx++;
        set_wm_trigger(&channel->state);
        channel->state.wmileft = wminext;
    }

    if (width) {
        quic_four_uncompress_row_seg(encoder, channel, correlate_row, prev_row, cur_row, pos,
                                  pos + width, bpc, bpc_mask);
        if (wmimax > (int)channel->state.wmidx) {
            channel->state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)channel->state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "616", __FUNCTION__, "assertion `%s' failed","(int)channel->state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channel->state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "617", __FUNCTION__, "assertion `%s' failed","channel->state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_tmpl.c" ":" "618", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}










static void quic_rgb32_compress_row0_seg(Encoder *encoder, int i,
                                     const rgb32_pixel_t * const cur_row,
                                     const int end,
                                     const unsigned int waitmask,
                                     const unsigned int bpc,
                                     const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "238", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        correlate_row_r[0] = family_8bpc.xlatU2L[((cur_row)->r)]; golomb_coding_8bpc(correlate_row_r[0], find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[0] = family_8bpc.xlatU2L[((cur_row)->g)]; golomb_coding_8bpc(correlate_row_g[0], find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[0] = family_8bpc.xlatU2L[((cur_row)->b)]; golomb_coding_8bpc(correlate_row_b[0], find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            encoder->rgb_state.waitcnt--;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codeword, codewordlen;
            correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        }

        update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
        stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codeword, codewordlen;

        correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
    }
    encoder->rgb_state.waitcnt = stopidx - end;
}

static void quic_rgb32_compress_row0(Encoder *encoder, const rgb32_pixel_t *cur_row,
                                 unsigned int width)
{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb32_compress_row0_seg(encoder, pos, cur_row, pos + encoder->rgb_state.wmileft,
                                     bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
            width -= encoder->rgb_state.wmileft;
            pos += encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb32_compress_row0_seg(encoder, pos, cur_row, pos + width,
                                 bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "308", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "309", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "310", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb32_compress_row_seg(Encoder *encoder, int i,
                                    const rgb32_pixel_t * const prev_row,
                                    const rgb32_pixel_t * const cur_row,
                                    const int end,
                                    const unsigned int waitmask,
                                    const unsigned int bpc,
                                    const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    int run_index = 0;
    int run_size;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "350", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        correlate_row_r[0] = family_8bpc.xlatU2L[(unsigned)((int)((cur_row)->r) - (int)((prev_row)->r) ) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[0], find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[0] = family_8bpc.xlatU2L[(unsigned)((int)((cur_row)->g) - (int)((prev_row)->g) ) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[0], find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[0] = family_8bpc.xlatU2L[(unsigned)((int)((cur_row)->b) - (int)((prev_row)->b) ) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[0], find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            encoder->rgb_state.waitcnt--;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codeword, codewordlen;

                ;
                if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
                ;

                correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
                correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
                correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            }

            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
            stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codeword, codewordlen;

            ;
            if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
            ;

            correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        }
        encoder->rgb_state.waitcnt = stopidx - end;

        return;


do_run:
        run_index = i;
        encoder->rgb_state.waitcnt = stopidx - i;
        run_size = 0;

        while ((((&cur_row[i])->r) == ((&cur_row[i - 1])->r) && ((&cur_row[i])->g) == ((&cur_row[i - 1])->g) && ((&cur_row[i])->b) == ((&cur_row[i - 1])->b))) {
            run_size++;
            if (++i == end) {
                encode_run(encoder, run_size);
                return;
            }
        }
        encode_run(encoder, run_size);
        stopidx = i + encoder->rgb_state.waitcnt;

    }
}

static void quic_rgb32_compress_row(Encoder *encoder,
                                const rgb32_pixel_t * const prev_row,
                                const rgb32_pixel_t * const cur_row,
                                unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb32_compress_row_seg(encoder, pos, prev_row, cur_row,
                                    pos + encoder->rgb_state.wmileft,
                                    bppmask[encoder->rgb_state.wmidx],
                                    bpc, bpc_mask);
            width -= encoder->rgb_state.wmileft;
            pos += encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb32_compress_row_seg(encoder, pos, prev_row, cur_row, pos + width,
                                bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "454", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "455", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "456", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb32_uncompress_row0_seg(Encoder *encoder, int i,
                                       rgb32_pixel_t * const cur_row,
                                       const int end,
                                       const unsigned int waitmask,
                                       const unsigned int bpc,
                                       const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "493", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        ((&cur_row[i])->pad = 0);
        correlate_row_r[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->r = (BYTE)family_8bpc.xlatL2U[correlate_row_r[0]]); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->g = (BYTE)family_8bpc.xlatL2U[correlate_row_g[0]]); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->b = (BYTE)family_8bpc.xlatL2U[correlate_row_b[0]]); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codewordlen;

            ((&cur_row[i])->pad = 0);
            correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        }
        update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
        stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codewordlen;

        ((&cur_row[i])->pad = 0);
        correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
    }
    encoder->rgb_state.waitcnt = stopidx - end;
}

static void quic_rgb32_uncompress_row0(Encoder *encoder,
                                   rgb32_pixel_t * const cur_row,
                                   unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb32_uncompress_row0_seg(encoder, pos, cur_row,
                                       pos + encoder->rgb_state.wmileft,
                                       bppmask[encoder->rgb_state.wmidx],
                                       bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb32_uncompress_row0_seg(encoder, pos, cur_row, pos + width,
                                   bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "570", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "571", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "572", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb32_uncompress_row_seg(Encoder *encoder,
                                      const rgb32_pixel_t * const prev_row,
                                      rgb32_pixel_t * const cur_row,
                                      int i,
                                      const int end,
                                      const unsigned int bpc,
                                      const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    const unsigned int waitmask = bppmask[encoder->rgb_state.wmidx];
    int stopidx;

    int run_index = 0;
    int run_end;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "614", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        ((&cur_row[i])->pad = 0);
        correlate_row_r[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->r = (family_8bpc.xlatL2U[correlate_row_r[0]] + ((prev_row)->r)) & bpc_mask); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->g = (family_8bpc.xlatL2U[correlate_row_g[0]] + ((prev_row)->g)) & bpc_mask); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->b = (family_8bpc.xlatL2U[correlate_row_b[0]] + ((prev_row)->b)) & bpc_mask); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codewordlen;

                ;
                if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
                ;

                ((&cur_row[i])->pad = 0);
                correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
                correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
                correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            }

            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;

            stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codewordlen;

            ;
            if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
            ;

            ((&cur_row[i])->pad = 0);
            correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        }

        encoder->rgb_state.waitcnt = stopidx - end;

        return;


do_run:
        encoder->rgb_state.waitcnt = stopidx - i;
        run_index = i;
        run_end = i + decode_run(encoder);

        for (; i < run_end; i++) {
            ((&cur_row[i])->pad = 0);
            ((&cur_row[i])->r = ((&cur_row[i - 1])->r));
            ((&cur_row[i])->g = ((&cur_row[i - 1])->g));
            ((&cur_row[i])->b = ((&cur_row[i - 1])->b));
        }

        if (i == end) {
            return;
        }

        stopidx = i + encoder->rgb_state.waitcnt;

    }
}

static void quic_rgb32_uncompress_row(Encoder *encoder,
                                  const rgb32_pixel_t * const prev_row,
                                  rgb32_pixel_t * const cur_row,
                                  unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb32_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                      pos + encoder->rgb_state.wmileft, bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb32_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                  pos + width, bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "724", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "725", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "726", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}








static void quic_rgb24_compress_row0_seg(Encoder *encoder, int i,
                                     const rgb24_pixel_t * const cur_row,
                                     const int end,
                                     const unsigned int waitmask,
                                     const unsigned int bpc,
                                     const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "238", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        correlate_row_r[0] = family_8bpc.xlatU2L[((cur_row)->r)]; golomb_coding_8bpc(correlate_row_r[0], find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[0] = family_8bpc.xlatU2L[((cur_row)->g)]; golomb_coding_8bpc(correlate_row_g[0], find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[0] = family_8bpc.xlatU2L[((cur_row)->b)]; golomb_coding_8bpc(correlate_row_b[0], find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            encoder->rgb_state.waitcnt--;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codeword, codewordlen;
            correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        }

        update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
        stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codeword, codewordlen;

        correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
    }
    encoder->rgb_state.waitcnt = stopidx - end;
}

static void quic_rgb24_compress_row0(Encoder *encoder, const rgb24_pixel_t *cur_row,
                                 unsigned int width)
{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb24_compress_row0_seg(encoder, pos, cur_row, pos + encoder->rgb_state.wmileft,
                                     bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
            width -= encoder->rgb_state.wmileft;
            pos += encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb24_compress_row0_seg(encoder, pos, cur_row, pos + width,
                                 bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "308", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "309", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "310", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb24_compress_row_seg(Encoder *encoder, int i,
                                    const rgb24_pixel_t * const prev_row,
                                    const rgb24_pixel_t * const cur_row,
                                    const int end,
                                    const unsigned int waitmask,
                                    const unsigned int bpc,
                                    const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    int run_index = 0;
    int run_size;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "350", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        correlate_row_r[0] = family_8bpc.xlatU2L[(unsigned)((int)((cur_row)->r) - (int)((prev_row)->r) ) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[0], find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[0] = family_8bpc.xlatU2L[(unsigned)((int)((cur_row)->g) - (int)((prev_row)->g) ) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[0], find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[0] = family_8bpc.xlatU2L[(unsigned)((int)((cur_row)->b) - (int)((prev_row)->b) ) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[0], find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            encoder->rgb_state.waitcnt--;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codeword, codewordlen;

                ;
                if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
                ;

                correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
                correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
                correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            }

            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
            stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codeword, codewordlen;

            ;
            if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
            ;

            correlate_row_r[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->r) - (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_r[i], find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_g[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->g) - (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_g[i], find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_b[i] = family_8bpc.xlatU2L[(unsigned)((int)((&cur_row[i])->b) - (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask]; golomb_coding_8bpc(correlate_row_b[i], find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        }
        encoder->rgb_state.waitcnt = stopidx - end;

        return;


do_run:
        run_index = i;
        encoder->rgb_state.waitcnt = stopidx - i;
        run_size = 0;

        while ((((&cur_row[i])->r) == ((&cur_row[i - 1])->r) && ((&cur_row[i])->g) == ((&cur_row[i - 1])->g) && ((&cur_row[i])->b) == ((&cur_row[i - 1])->b))) {
            run_size++;
            if (++i == end) {
                encode_run(encoder, run_size);
                return;
            }
        }
        encode_run(encoder, run_size);
        stopidx = i + encoder->rgb_state.waitcnt;

    }
}

static void quic_rgb24_compress_row(Encoder *encoder,
                                const rgb24_pixel_t * const prev_row,
                                const rgb24_pixel_t * const cur_row,
                                unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb24_compress_row_seg(encoder, pos, prev_row, cur_row,
                                    pos + encoder->rgb_state.wmileft,
                                    bppmask[encoder->rgb_state.wmidx],
                                    bpc, bpc_mask);
            width -= encoder->rgb_state.wmileft;
            pos += encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb24_compress_row_seg(encoder, pos, prev_row, cur_row, pos + width,
                                bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "454", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "455", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "456", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb24_uncompress_row0_seg(Encoder *encoder, int i,
                                       rgb24_pixel_t * const cur_row,
                                       const int end,
                                       const unsigned int waitmask,
                                       const unsigned int bpc,
                                       const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "493", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        ;
        correlate_row_r[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->r = (BYTE)family_8bpc.xlatL2U[correlate_row_r[0]]); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->g = (BYTE)family_8bpc.xlatL2U[correlate_row_g[0]]); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->b = (BYTE)family_8bpc.xlatL2U[correlate_row_b[0]]); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codewordlen;

            ;
            correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        }
        update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
        stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codewordlen;

        ;
        correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b))) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
    }
    encoder->rgb_state.waitcnt = stopidx - end;
}

static void quic_rgb24_uncompress_row0(Encoder *encoder,
                                   rgb24_pixel_t * const cur_row,
                                   unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb24_uncompress_row0_seg(encoder, pos, cur_row,
                                       pos + encoder->rgb_state.wmileft,
                                       bppmask[encoder->rgb_state.wmidx],
                                       bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb24_uncompress_row0_seg(encoder, pos, cur_row, pos + width,
                                   bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "570", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "571", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "572", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb24_uncompress_row_seg(Encoder *encoder,
                                      const rgb24_pixel_t * const prev_row,
                                      rgb24_pixel_t * const cur_row,
                                      int i,
                                      const int end,
                                      const unsigned int bpc,
                                      const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    const unsigned int waitmask = bppmask[encoder->rgb_state.wmidx];
    int stopidx;

    int run_index = 0;
    int run_end;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "614", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        ;
        correlate_row_r[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->r = (family_8bpc.xlatL2U[correlate_row_r[0]] + ((prev_row)->r)) & bpc_mask); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->g = (family_8bpc.xlatL2U[correlate_row_g[0]] + ((prev_row)->g)) & bpc_mask); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->b = (family_8bpc.xlatL2U[correlate_row_b[0]] + ((prev_row)->b)) & bpc_mask); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codewordlen;

                ;
                if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
                ;

                ;
                correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
                correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
                correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            }

            update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_8bpc(&encoder->rgb_state, find_bucket_8bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;

            stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codewordlen;

            ;
            if ((((&prev_row[i - 1])->r) == ((&prev_row[i])->r) && ((&prev_row[i - 1])->g) == ((&prev_row[i])->g) && ((&prev_row[i - 1])->b) == ((&prev_row[i])->b))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r) == ((&cur_row[i - 2])->r) && ((&cur_row[i - 1])->g) == ((&cur_row[i - 2])->g) && ((&cur_row[i - 1])->b) == ((&cur_row[i - 2])->b))) { goto do_run; } };
            ;

            ;
            correlate_row_r[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((family_8bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r)) + ((unsigned int)((&prev_row[i])->r))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((family_8bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g)) + ((unsigned int)((&prev_row[i])->g))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_8bpc(find_bucket_8bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((family_8bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b)) + ((unsigned int)((&prev_row[i])->b))) >> 1)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;
        }

        encoder->rgb_state.waitcnt = stopidx - end;

        return;


do_run:
        encoder->rgb_state.waitcnt = stopidx - i;
        run_index = i;
        run_end = i + decode_run(encoder);

        for (; i < run_end; i++) {
            ;
            ((&cur_row[i])->r = ((&cur_row[i - 1])->r));
            ((&cur_row[i])->g = ((&cur_row[i - 1])->g));
            ((&cur_row[i])->b = ((&cur_row[i - 1])->b));
        }

        if (i == end) {
            return;
        }

        stopidx = i + encoder->rgb_state.waitcnt;

    }
}

static void quic_rgb24_uncompress_row(Encoder *encoder,
                                  const rgb24_pixel_t * const prev_row,
                                  rgb24_pixel_t * const cur_row,
                                  unsigned int width)

{
    const unsigned int bpc = 8;
    const unsigned int bpc_mask = 0xffU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb24_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                      pos + encoder->rgb_state.wmileft, bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb24_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                  pos + width, bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "724", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "725", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "726", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}








static void quic_rgb16_compress_row0_seg(Encoder *encoder, int i,
                                     const rgb16_pixel_t * const cur_row,
                                     const int end,
                                     const unsigned int waitmask,
                                     const unsigned int bpc,
                                     const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "238", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        correlate_row_r[0] = family_5bpc.xlatU2L[((*(cur_row) >> 10) & 0x1f)]; golomb_coding_5bpc(correlate_row_r[0], find_bucket_5bpc(channel_r, correlate_row_r[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[0] = family_5bpc.xlatU2L[((*(cur_row) >> 5) & 0x1f)]; golomb_coding_5bpc(correlate_row_g[0], find_bucket_5bpc(channel_g, correlate_row_g[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[0] = family_5bpc.xlatU2L[(*(cur_row) & 0x1f)]; golomb_coding_5bpc(correlate_row_b[0], find_bucket_5bpc(channel_b, correlate_row_b[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            encoder->rgb_state.waitcnt--;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codeword, codewordlen;
            correlate_row_r[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 10) & 0x1f) - (int)((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f))) & bpc_mask]; golomb_coding_5bpc(correlate_row_r[i], find_bucket_5bpc(channel_r, correlate_row_r[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_g[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 5) & 0x1f) - (int)((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f))) & bpc_mask]; golomb_coding_5bpc(correlate_row_g[i], find_bucket_5bpc(channel_g, correlate_row_g[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_b[i] = family_5bpc.xlatU2L[(unsigned)((int)(*(&cur_row[i]) & 0x1f) - (int)((unsigned int)(*((&cur_row[i]) - 1) & 0x1f))) & bpc_mask]; golomb_coding_5bpc(correlate_row_b[i], find_bucket_5bpc(channel_b, correlate_row_b[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        }

        update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
        stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codeword, codewordlen;

        correlate_row_r[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 10) & 0x1f) - (int)((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f))) & bpc_mask]; golomb_coding_5bpc(correlate_row_r[i], find_bucket_5bpc(channel_r, correlate_row_r[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 5) & 0x1f) - (int)((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f))) & bpc_mask]; golomb_coding_5bpc(correlate_row_g[i], find_bucket_5bpc(channel_g, correlate_row_g[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[i] = family_5bpc.xlatU2L[(unsigned)((int)(*(&cur_row[i]) & 0x1f) - (int)((unsigned int)(*((&cur_row[i]) - 1) & 0x1f))) & bpc_mask]; golomb_coding_5bpc(correlate_row_b[i], find_bucket_5bpc(channel_b, correlate_row_b[i -1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
    }
    encoder->rgb_state.waitcnt = stopidx - end;
}

static void quic_rgb16_compress_row0(Encoder *encoder, const rgb16_pixel_t *cur_row,
                                 unsigned int width)
{
    const unsigned int bpc = 5;
    const unsigned int bpc_mask = 0x1fU;
    int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb16_compress_row0_seg(encoder, pos, cur_row, pos + encoder->rgb_state.wmileft,
                                     bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
            width -= encoder->rgb_state.wmileft;
            pos += encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb16_compress_row0_seg(encoder, pos, cur_row, pos + width,
                                 bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "308", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "309", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "310", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb16_compress_row_seg(Encoder *encoder, int i,
                                    const rgb16_pixel_t * const prev_row,
                                    const rgb16_pixel_t * const cur_row,
                                    const int end,
                                    const unsigned int waitmask,
                                    const unsigned int bpc,
                                    const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    int run_index = 0;
    int run_size;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "350", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codeword, codewordlen;

        correlate_row_r[0] = family_5bpc.xlatU2L[(unsigned)((int)((*(cur_row) >> 10) & 0x1f) - (int)((*(prev_row) >> 10) & 0x1f) ) & bpc_mask]; golomb_coding_5bpc(correlate_row_r[0], find_bucket_5bpc(channel_r, correlate_row_r[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_g[0] = family_5bpc.xlatU2L[(unsigned)((int)((*(cur_row) >> 5) & 0x1f) - (int)((*(prev_row) >> 5) & 0x1f) ) & bpc_mask]; golomb_coding_5bpc(correlate_row_g[0], find_bucket_5bpc(channel_g, correlate_row_g[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        correlate_row_b[0] = family_5bpc.xlatU2L[(unsigned)((int)(*(cur_row) & 0x1f) - (int)(*(prev_row) & 0x1f) ) & bpc_mask]; golomb_coding_5bpc(correlate_row_b[0], find_bucket_5bpc(channel_b, correlate_row_b[-1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            encoder->rgb_state.waitcnt--;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codeword, codewordlen;

                ;
                if ((((*(&prev_row[i - 1]) >> 10) & 0x1f) == ((*(&prev_row[i]) >> 10) & 0x1f) && ((*(&prev_row[i - 1]) >> 5) & 0x1f) == ((*(&prev_row[i]) >> 5) & 0x1f) && (*(&prev_row[i - 1]) & 0x1f) == (*(&prev_row[i]) & 0x1f))) { if (run_index != i && i > 2 && (((*(&cur_row[i - 1]) >> 10) & 0x1f) == ((*(&cur_row[i - 2]) >> 10) & 0x1f) && ((*(&cur_row[i - 1]) >> 5) & 0x1f) == ((*(&cur_row[i - 2]) >> 5) & 0x1f) && (*(&cur_row[i - 1]) & 0x1f) == (*(&cur_row[i - 2]) & 0x1f))) { goto do_run; } };
                ;

                correlate_row_r[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 10) & 0x1f) - (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 10) & 0x1f))) >> 1)) & bpc_mask]; golomb_coding_5bpc(correlate_row_r[i], find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
                correlate_row_g[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 5) & 0x1f) - (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 5) & 0x1f))) >> 1)) & bpc_mask]; golomb_coding_5bpc(correlate_row_g[i], find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
                correlate_row_b[i] = family_5bpc.xlatU2L[(unsigned)((int)(*(&cur_row[i]) & 0x1f) - (int)((((unsigned int)(*((&cur_row[i]) - 1) & 0x1f)) + ((unsigned int)(*(&prev_row[i]) & 0x1f))) >> 1)) & bpc_mask]; golomb_coding_5bpc(correlate_row_b[i], find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            }

            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
            stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codeword, codewordlen;

            ;
            if ((((*(&prev_row[i - 1]) >> 10) & 0x1f) == ((*(&prev_row[i]) >> 10) & 0x1f) && ((*(&prev_row[i - 1]) >> 5) & 0x1f) == ((*(&prev_row[i]) >> 5) & 0x1f) && (*(&prev_row[i - 1]) & 0x1f) == (*(&prev_row[i]) & 0x1f))) { if (run_index != i && i > 2 && (((*(&cur_row[i - 1]) >> 10) & 0x1f) == ((*(&cur_row[i - 2]) >> 10) & 0x1f) && ((*(&cur_row[i - 1]) >> 5) & 0x1f) == ((*(&cur_row[i - 2]) >> 5) & 0x1f) && (*(&cur_row[i - 1]) & 0x1f) == (*(&cur_row[i - 2]) & 0x1f))) { goto do_run; } };
            ;

            correlate_row_r[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 10) & 0x1f) - (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 10) & 0x1f))) >> 1)) & bpc_mask]; golomb_coding_5bpc(correlate_row_r[i], find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_g[i] = family_5bpc.xlatU2L[(unsigned)((int)((*(&cur_row[i]) >> 5) & 0x1f) - (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 5) & 0x1f))) >> 1)) & bpc_mask]; golomb_coding_5bpc(correlate_row_g[i], find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
            correlate_row_b[i] = family_5bpc.xlatU2L[(unsigned)((int)(*(&cur_row[i]) & 0x1f) - (int)((((unsigned int)(*((&cur_row[i]) - 1) & 0x1f)) + ((unsigned int)(*(&prev_row[i]) & 0x1f))) >> 1)) & bpc_mask]; golomb_coding_5bpc(correlate_row_b[i], find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, &codeword, &codewordlen); encode(encoder, codeword, codewordlen);;
        }
        encoder->rgb_state.waitcnt = stopidx - end;

        return;


do_run:
        run_index = i;
        encoder->rgb_state.waitcnt = stopidx - i;
        run_size = 0;

        while ((((*(&cur_row[i]) >> 10) & 0x1f) == ((*(&cur_row[i - 1]) >> 10) & 0x1f) && ((*(&cur_row[i]) >> 5) & 0x1f) == ((*(&cur_row[i - 1]) >> 5) & 0x1f) && (*(&cur_row[i]) & 0x1f) == (*(&cur_row[i - 1]) & 0x1f))) {
            run_size++;
            if (++i == end) {
                encode_run(encoder, run_size);
                return;
            }
        }
        encode_run(encoder, run_size);
        stopidx = i + encoder->rgb_state.waitcnt;

    }
}

static void quic_rgb16_compress_row(Encoder *encoder,
                                const rgb16_pixel_t * const prev_row,
                                const rgb16_pixel_t * const cur_row,
                                unsigned int width)

{
    const unsigned int bpc = 5;
    const unsigned int bpc_mask = 0x1fU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb16_compress_row_seg(encoder, pos, prev_row, cur_row,
                                    pos + encoder->rgb_state.wmileft,
                                    bppmask[encoder->rgb_state.wmidx],
                                    bpc, bpc_mask);
            width -= encoder->rgb_state.wmileft;
            pos += encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb16_compress_row_seg(encoder, pos, prev_row, cur_row, pos + width,
                                bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "454", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "455", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "456", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb16_uncompress_row0_seg(Encoder *encoder, int i,
                                       rgb16_pixel_t * const cur_row,
                                       const int end,
                                       const unsigned int waitmask,
                                       const unsigned int bpc,
                                       const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "493", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        (*(&cur_row[i]) = 0);
        correlate_row_r[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[0]) = (*(&cur_row[0]) & ~(0x1f << 10)) | (((BYTE)family_5bpc.xlatL2U[correlate_row_r[0]]) << 10)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[0]) = (*(&cur_row[0]) & ~(0x1f << 5)) | (((BYTE)family_5bpc.xlatL2U[correlate_row_g[0]]) << 5)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[0]) = (*(&cur_row[0]) & ~0x1f) | ((BYTE)family_5bpc.xlatL2U[correlate_row_b[0]])); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codewordlen;

            (*(&cur_row[i]) = 0);
            correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 10)) | ((((family_5bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f))) & bpc_mask)) << 10)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 5)) | ((((family_5bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f))) & bpc_mask)) << 5)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~0x1f) | (((family_5bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(*((&cur_row[i]) - 1) & 0x1f))) & bpc_mask))); decode_eatbits(encoder, codewordlen);;
        }
        update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
        stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codewordlen;

        (*(&cur_row[i]) = 0);
        correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 10)) | ((((family_5bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f))) & bpc_mask)) << 10)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 5)) | ((((family_5bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f))) & bpc_mask)) << 5)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~0x1f) | (((family_5bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(*((&cur_row[i]) - 1) & 0x1f))) & bpc_mask))); decode_eatbits(encoder, codewordlen);;
    }
    encoder->rgb_state.waitcnt = stopidx - end;
}

static void quic_rgb16_uncompress_row0(Encoder *encoder,
                                   rgb16_pixel_t * const cur_row,
                                   unsigned int width)

{
    const unsigned int bpc = 5;
    const unsigned int bpc_mask = 0x1fU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb16_uncompress_row0_seg(encoder, pos, cur_row,
                                       pos + encoder->rgb_state.wmileft,
                                       bppmask[encoder->rgb_state.wmidx],
                                       bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb16_uncompress_row0_seg(encoder, pos, cur_row, pos + width,
                                   bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "570", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "571", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "572", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb16_uncompress_row_seg(Encoder *encoder,
                                      const rgb16_pixel_t * const prev_row,
                                      rgb16_pixel_t * const cur_row,
                                      int i,
                                      const int end,
                                      const unsigned int bpc,
                                      const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    const unsigned int waitmask = bppmask[encoder->rgb_state.wmidx];
    int stopidx;

    int run_index = 0;
    int run_end;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "614", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        (*(&cur_row[i]) = 0);
        correlate_row_r[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[0]) = (*(&cur_row[0]) & ~(0x1f << 10)) | (((family_5bpc.xlatL2U[correlate_row_r[0]] + ((*(prev_row) >> 10) & 0x1f)) & bpc_mask) << 10)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[0]) = (*(&cur_row[0]) & ~(0x1f << 5)) | (((family_5bpc.xlatL2U[correlate_row_g[0]] + ((*(prev_row) >> 5) & 0x1f)) & bpc_mask) << 5)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[0]) = (*(&cur_row[0]) & ~0x1f) | ((family_5bpc.xlatL2U[correlate_row_b[0]] + (*(prev_row) & 0x1f)) & bpc_mask)); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codewordlen;

                ;
                if ((((*(&prev_row[i - 1]) >> 10) & 0x1f) == ((*(&prev_row[i]) >> 10) & 0x1f) && ((*(&prev_row[i - 1]) >> 5) & 0x1f) == ((*(&prev_row[i]) >> 5) & 0x1f) && (*(&prev_row[i - 1]) & 0x1f) == (*(&prev_row[i]) & 0x1f))) { if (run_index != i && i > 2 && (((*(&cur_row[i - 1]) >> 10) & 0x1f) == ((*(&cur_row[i - 2]) >> 10) & 0x1f) && ((*(&cur_row[i - 1]) >> 5) & 0x1f) == ((*(&cur_row[i - 2]) >> 5) & 0x1f) && (*(&cur_row[i - 1]) & 0x1f) == (*(&cur_row[i - 2]) & 0x1f))) { goto do_run; } };
                ;

                (*(&cur_row[i]) = 0);
                correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 10)) | ((((family_5bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 10) & 0x1f))) >> 1)) & bpc_mask)) << 10)); decode_eatbits(encoder, codewordlen);;
                correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 5)) | ((((family_5bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 5) & 0x1f))) >> 1)) & bpc_mask)) << 5)); decode_eatbits(encoder, codewordlen);;
                correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~0x1f) | (((family_5bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(*((&cur_row[i]) - 1) & 0x1f)) + ((unsigned int)(*(&prev_row[i]) & 0x1f))) >> 1)) & bpc_mask))); decode_eatbits(encoder, codewordlen);;
            }

            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;

            stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codewordlen;

            ;
            if ((((*(&prev_row[i - 1]) >> 10) & 0x1f) == ((*(&prev_row[i]) >> 10) & 0x1f) && ((*(&prev_row[i - 1]) >> 5) & 0x1f) == ((*(&prev_row[i]) >> 5) & 0x1f) && (*(&prev_row[i - 1]) & 0x1f) == (*(&prev_row[i]) & 0x1f))) { if (run_index != i && i > 2 && (((*(&cur_row[i - 1]) >> 10) & 0x1f) == ((*(&cur_row[i - 2]) >> 10) & 0x1f) && ((*(&cur_row[i - 1]) >> 5) & 0x1f) == ((*(&cur_row[i - 2]) >> 5) & 0x1f) && (*(&cur_row[i - 1]) & 0x1f) == (*(&cur_row[i - 2]) & 0x1f))) { goto do_run; } };
            ;

            (*(&cur_row[i]) = 0);
            correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 10)) | ((((family_5bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 10) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 10) & 0x1f))) >> 1)) & bpc_mask)) << 10)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 5)) | ((((family_5bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)((*((&cur_row[i]) - 1) >> 5) & 0x1f)) + ((unsigned int)((*(&prev_row[i]) >> 5) & 0x1f))) >> 1)) & bpc_mask)) << 5)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); (*(&cur_row[i]) = (*(&cur_row[i]) & ~0x1f) | (((family_5bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(*((&cur_row[i]) - 1) & 0x1f)) + ((unsigned int)(*(&prev_row[i]) & 0x1f))) >> 1)) & bpc_mask))); decode_eatbits(encoder, codewordlen);;
        }

        encoder->rgb_state.waitcnt = stopidx - end;

        return;


do_run:
        encoder->rgb_state.waitcnt = stopidx - i;
        run_index = i;
        run_end = i + decode_run(encoder);

        for (; i < run_end; i++) {
            (*(&cur_row[i]) = 0);
            (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 10)) | ((((*(&cur_row[i - 1]) >> 10) & 0x1f)) << 10));
            (*(&cur_row[i]) = (*(&cur_row[i]) & ~(0x1f << 5)) | ((((*(&cur_row[i - 1]) >> 5) & 0x1f)) << 5));
            (*(&cur_row[i]) = (*(&cur_row[i]) & ~0x1f) | ((*(&cur_row[i - 1]) & 0x1f)));
        }

        if (i == end) {
            return;
        }

        stopidx = i + encoder->rgb_state.waitcnt;

    }
}

static void quic_rgb16_uncompress_row(Encoder *encoder,
                                  const rgb16_pixel_t * const prev_row,
                                  rgb16_pixel_t * const cur_row,
                                  unsigned int width)

{
    const unsigned int bpc = 5;
    const unsigned int bpc_mask = 0x1fU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb16_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                      pos + encoder->rgb_state.wmileft, bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb16_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                  pos + width, bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "724", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "725", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "726", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}








static void quic_rgb16_to_32_uncompress_row0_seg(Encoder *encoder, int i,
                                       rgb32_pixel_t * const cur_row,
                                       const int end,
                                       const unsigned int waitmask,
                                       const unsigned int bpc,
                                       const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    int stopidx;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "493", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        ((&cur_row[i])->pad = 0);
        correlate_row_r[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->r = (((BYTE)family_5bpc.xlatL2U[correlate_row_r[0]]) << 3) | ((((BYTE)family_5bpc.xlatL2U[correlate_row_r[0]]) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->g = (((BYTE)family_5bpc.xlatL2U[correlate_row_g[0]]) << 3) | ((((BYTE)family_5bpc.xlatL2U[correlate_row_g[0]]) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->b = (((BYTE)family_5bpc.xlatL2U[correlate_row_b[0]]) << 3) | ((((BYTE)family_5bpc.xlatL2U[correlate_row_b[0]]) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }

    while (stopidx < end) {
        for (; i <= stopidx; i++) {
            unsigned int codewordlen;

            ((&cur_row[i])->pad = 0);
            correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((((family_5bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r >> 3))) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r >> 3))) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((((family_5bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g >> 3))) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g >> 3))) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((((family_5bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b >> 3))) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b >> 3))) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        }
        update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;
        stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
    }

    for (; i < end; i++) {
        unsigned int codewordlen;

        ((&cur_row[i])->pad = 0);
        correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((((family_5bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r >> 3))) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_r[i]] + ((unsigned int)(((&cur_row[i]) - 1)->r >> 3))) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((((family_5bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g >> 3))) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_g[i]] + ((unsigned int)(((&cur_row[i]) - 1)->g >> 3))) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((((family_5bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b >> 3))) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_b[i]] + ((unsigned int)(((&cur_row[i]) - 1)->b >> 3))) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
    }
    encoder->rgb_state.waitcnt = stopidx - end;
}

static void quic_rgb16_to_32_uncompress_row0(Encoder *encoder,
                                   rgb32_pixel_t * const cur_row,
                                   unsigned int width)

{
    const unsigned int bpc = 5;
    const unsigned int bpc_mask = 0x1fU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb16_to_32_uncompress_row0_seg(encoder, pos, cur_row,
                                       pos + encoder->rgb_state.wmileft,
                                       bppmask[encoder->rgb_state.wmidx],
                                       bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb16_to_32_uncompress_row0_seg(encoder, pos, cur_row, pos + width,
                                   bppmask[encoder->rgb_state.wmidx], bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "570", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "571", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "572", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}

static void quic_rgb16_to_32_uncompress_row_seg(Encoder *encoder,
                                      const rgb32_pixel_t * const prev_row,
                                      rgb32_pixel_t * const cur_row,
                                      int i,
                                      const int end,
                                      const unsigned int bpc,
                                      const unsigned int bpc_mask)
{
    Channel * const channel_r = encoder->channels;
    Channel * const channel_g = channel_r + 1;
    Channel * const channel_b = channel_g + 1;

    BYTE * const correlate_row_r = channel_r->correlate_row;
    BYTE * const correlate_row_g = channel_g->correlate_row;
    BYTE * const correlate_row_b = channel_b->correlate_row;
    const unsigned int waitmask = bppmask[encoder->rgb_state.wmidx];
    int stopidx;

    int run_index = 0;
    int run_end;


    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (end - i > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "614", __FUNCTION__, "assertion `%s' failed","end - i > 0"); } while (0); } } while (0);

    if (!i) {
        unsigned int codewordlen;

        ((&cur_row[i])->pad = 0);
        correlate_row_r[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->r = (((family_5bpc.xlatL2U[correlate_row_r[0]] + ((prev_row)->r >> 3)) & bpc_mask) << 3) | ((((family_5bpc.xlatL2U[correlate_row_r[0]] + ((prev_row)->r >> 3)) & bpc_mask) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        correlate_row_g[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->g = (((family_5bpc.xlatL2U[correlate_row_g[0]] + ((prev_row)->g >> 3)) & bpc_mask) << 3) | ((((family_5bpc.xlatL2U[correlate_row_g[0]] + ((prev_row)->g >> 3)) & bpc_mask) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        correlate_row_b[0] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[-1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[0])->b = (((family_5bpc.xlatL2U[correlate_row_b[0]] + ((prev_row)->b >> 3)) & bpc_mask) << 3) | ((((family_5bpc.xlatL2U[correlate_row_b[0]] + ((prev_row)->b >> 3)) & bpc_mask) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;

        if (encoder->rgb_state.waitcnt) {
            --encoder->rgb_state.waitcnt;
        } else {
            encoder->rgb_state.waitcnt = (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[0 - 1]), correlate_row_r[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[0 - 1]), correlate_row_g[0], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[0 - 1]), correlate_row_b[0], bpc);;
        }
        stopidx = ++i + encoder->rgb_state.waitcnt;
    } else {
        stopidx = i + encoder->rgb_state.waitcnt;
    }
    for (;;) {
        while (stopidx < end) {
            for (; i <= stopidx; i++) {
                unsigned int codewordlen;

                ;
                if ((((&prev_row[i - 1])->r >> 3) == ((&prev_row[i])->r >> 3) && ((&prev_row[i - 1])->g >> 3) == ((&prev_row[i])->g >> 3) && ((&prev_row[i - 1])->b >> 3) == ((&prev_row[i])->b >> 3))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r >> 3) == ((&cur_row[i - 2])->r >> 3) && ((&cur_row[i - 1])->g >> 3) == ((&cur_row[i - 2])->g >> 3) && ((&cur_row[i - 1])->b >> 3) == ((&cur_row[i - 2])->b >> 3))) { goto do_run; } };
                ;

                ((&cur_row[i])->pad = 0);
                correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((((family_5bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r >> 3)) + ((unsigned int)((&prev_row[i])->r >> 3))) >> 1)) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r >> 3)) + ((unsigned int)((&prev_row[i])->r >> 3))) >> 1)) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
                correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((((family_5bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g >> 3)) + ((unsigned int)((&prev_row[i])->g >> 3))) >> 1)) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g >> 3)) + ((unsigned int)((&prev_row[i])->g >> 3))) >> 1)) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
                correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((((family_5bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b >> 3)) + ((unsigned int)((&prev_row[i])->b >> 3))) >> 1)) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b >> 3)) + ((unsigned int)((&prev_row[i])->b >> 3))) >> 1)) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
            }

            update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_r, correlate_row_r[stopidx - 1]), correlate_row_r[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_g, correlate_row_g[stopidx - 1]), correlate_row_g[stopidx], bpc); update_model_5bpc(&encoder->rgb_state, find_bucket_5bpc(channel_b, correlate_row_b[stopidx - 1]), correlate_row_b[stopidx], bpc);;

            stopidx = i + (tabrand(&encoder->rgb_state.tabrand_seed) & waitmask);
        }

        for (; i < end; i++) {
            unsigned int codewordlen;

            ;
            if ((((&prev_row[i - 1])->r >> 3) == ((&prev_row[i])->r >> 3) && ((&prev_row[i - 1])->g >> 3) == ((&prev_row[i])->g >> 3) && ((&prev_row[i - 1])->b >> 3) == ((&prev_row[i])->b >> 3))) { if (run_index != i && i > 2 && (((&cur_row[i - 1])->r >> 3) == ((&cur_row[i - 2])->r >> 3) && ((&cur_row[i - 1])->g >> 3) == ((&cur_row[i - 2])->g >> 3) && ((&cur_row[i - 1])->b >> 3) == ((&cur_row[i - 2])->b >> 3))) { goto do_run; } };
            ;

            ((&cur_row[i])->pad = 0);
            correlate_row_r[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_r, correlate_row_r[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->r = ((((family_5bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r >> 3)) + ((unsigned int)((&prev_row[i])->r >> 3))) >> 1)) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_r[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->r >> 3)) + ((unsigned int)((&prev_row[i])->r >> 3))) >> 1)) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
            correlate_row_g[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_g, correlate_row_g[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->g = ((((family_5bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g >> 3)) + ((unsigned int)((&prev_row[i])->g >> 3))) >> 1)) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_g[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->g >> 3)) + ((unsigned int)((&prev_row[i])->g >> 3))) >> 1)) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
            correlate_row_b[i] = (BYTE)golomb_decoding_5bpc(find_bucket_5bpc(channel_b, correlate_row_b[i - 1])->bestcode, encoder->io_word, &codewordlen); ((&cur_row[i])->b = ((((family_5bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b >> 3)) + ((unsigned int)((&prev_row[i])->b >> 3))) >> 1)) & bpc_mask)) << 3) | (((((family_5bpc.xlatL2U[correlate_row_b[i]] + (int)((((unsigned int)(((&cur_row[i]) - 1)->b >> 3)) + ((unsigned int)((&prev_row[i])->b >> 3))) >> 1)) & bpc_mask)) & 0x1f) >> 2)); decode_eatbits(encoder, codewordlen);;
        }

        encoder->rgb_state.waitcnt = stopidx - end;

        return;


do_run:
        encoder->rgb_state.waitcnt = stopidx - i;
        run_index = i;
        run_end = i + decode_run(encoder);

        for (; i < run_end; i++) {
            ((&cur_row[i])->pad = 0);
            ((&cur_row[i])->r = ((((&cur_row[i - 1])->r >> 3)) << 3) | (((((&cur_row[i - 1])->r >> 3)) & 0x1f) >> 2));
            ((&cur_row[i])->g = ((((&cur_row[i - 1])->g >> 3)) << 3) | (((((&cur_row[i - 1])->g >> 3)) & 0x1f) >> 2));
            ((&cur_row[i])->b = ((((&cur_row[i - 1])->b >> 3)) << 3) | (((((&cur_row[i - 1])->b >> 3)) & 0x1f) >> 2));
        }

        if (i == end) {
            return;
        }

        stopidx = i + encoder->rgb_state.waitcnt;

    }
}

static void quic_rgb16_to_32_uncompress_row(Encoder *encoder,
                                  const rgb32_pixel_t * const prev_row,
                                  rgb32_pixel_t * const cur_row,
                                  unsigned int width)

{
    const unsigned int bpc = 5;
    const unsigned int bpc_mask = 0x1fU;
    unsigned int pos = 0;

    while ((wmimax > (int)encoder->rgb_state.wmidx) && (encoder->rgb_state.wmileft <= width)) {
        if (encoder->rgb_state.wmileft) {
            quic_rgb16_to_32_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                      pos + encoder->rgb_state.wmileft, bpc, bpc_mask);
            pos += encoder->rgb_state.wmileft;
            width -= encoder->rgb_state.wmileft;
        }

        encoder->rgb_state.wmidx++;
        set_wm_trigger(&encoder->rgb_state);
        encoder->rgb_state.wmileft = wminext;
    }

    if (width) {
        quic_rgb16_to_32_uncompress_row_seg(encoder, prev_row, cur_row, pos,
                                  pos + width, bpc, bpc_mask);
        if (wmimax > (int)encoder->rgb_state.wmidx) {
            encoder->rgb_state.wmileft -= width;
        }
    }

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((int)encoder->rgb_state.wmidx <= wmimax) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "724", __FUNCTION__, "assertion `%s' failed","(int)encoder->rgb_state.wmidx <= wmimax"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (encoder->rgb_state.wmidx <= 32) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "725", __FUNCTION__, "assertion `%s' failed","encoder->rgb_state.wmidx <= 32"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (wminext > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic_rgb_tmpl.c" ":" "726", __FUNCTION__, "assertion `%s' failed","wminext > 0"); } while (0); } } while (0);
}


static void fill_model_structures(Encoder *encoder, FamilyStat *family_stat,
                                  unsigned int rep_first, unsigned int first_size,
                                  unsigned int rep_next, unsigned int mul_size,
                                  unsigned int levels, unsigned int ncounters,
                                  unsigned int nbuckets, unsigned int n_buckets_ptrs)
{
    unsigned int
    bsize,
    bstart,
    bend = 0,
    repcntr,
    bnumber;

    COUNTER * free_counter = family_stat->counters;


    bnumber = 0;

    repcntr = rep_first + 1;
    bsize = first_size;

    do {
        if (bnumber) {
            bstart = bend + 1;
        } else {
            bstart = 0;
        }

        if (!--repcntr) {
            repcntr = rep_next;
            bsize *= mul_size;
        }

        bend = bstart + bsize - 1;
        if (bend + bsize >= levels) {
            bend = levels - 1;
        }

        family_stat->buckets_buf[bnumber].pcounters = free_counter;
        free_counter += ncounters;

        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (bstart < n_buckets_ptrs) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "861", __FUNCTION__, "assertion `%s' failed","bstart < n_buckets_ptrs"); } while (0); } } while (0);
        {
            unsigned int i;
            do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (bend < n_buckets_ptrs) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "864", __FUNCTION__, "assertion `%s' failed","bend < n_buckets_ptrs"); } while (0); } } while (0);
            for (i = bstart; i <= bend; i++) {
                family_stat->buckets_ptrs[i] = family_stat->buckets_buf + bnumber;
            }
        }

        bnumber++;
    } while (bend < levels - 1);

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (free_counter - family_stat->counters == nbuckets * ncounters) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "873", __FUNCTION__, "assertion `%s' failed","free_counter - family_stat->counters == nbuckets * ncounters"); } while (0); } } while (0);
}

static void find_model_params(Encoder *encoder,
                              const int bpc,
                              unsigned int *ncounters,
                              unsigned int *levels,
                              unsigned int *n_buckets_ptrs,
                              unsigned int *repfirst,
                              unsigned int *firstsize,
                              unsigned int *repnext,
                              unsigned int *mulsize,
                              unsigned int *nbuckets)
{
    unsigned int bsize;
    unsigned int bstart, bend = 0;
    unsigned int repcntr;

    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (bpc <= 8 && bpc > 0) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "891", __FUNCTION__, "assertion `%s' failed","bpc <= 8 && bpc > 0"); } while (0); } } while (0);


    *ncounters = 8;

    *levels = 0x1 << bpc;

    *n_buckets_ptrs = 0;

    switch (evol) {
    case 1:
        *repfirst = 3;
        *firstsize = 1;
        *repnext = 2;
        *mulsize = 2;
        break;
    case 3:
        *repfirst = 1;
        *firstsize = 1;
        *repnext = 1;
        *mulsize = 2;
        break;
    case 5:
        *repfirst = 1;
        *firstsize = 1;
        *repnext = 1;
        *mulsize = 4;
        break;
    case 0:
    case 2:
    case 4:
        encoder->usr->error(encoder->usr, "findmodelparams(): evol value obsolete!!!\n");
    default:
        encoder->usr->error(encoder->usr, "findmodelparams(): evol out of range!!!\n");
    }

    *nbuckets = 0;
    repcntr = *repfirst + 1;
    bsize = *firstsize;

    do {
        if (nbuckets) {
            bstart = bend + 1;
        } else {
            bstart = 0;
        }

        if (!--repcntr) {
            repcntr = *repnext;
            bsize *= *mulsize;
        }

        bend = bstart + bsize - 1;
        if (bend + bsize >= *levels) {
            bend = *levels - 1;
        }

        if (!*n_buckets_ptrs) {
            *n_buckets_ptrs = *levels;

        }

        (*nbuckets)++;
    } while (bend < *levels - 1);
}

static int init_model_structures(Encoder *encoder, FamilyStat *family_stat,
                                 unsigned int rep_first, unsigned int first_size,
                                 unsigned int rep_next, unsigned int mul_size,
                                 unsigned int levels, unsigned int ncounters,
                                 unsigned int n_buckets_ptrs, unsigned int n_buckets)
{
    family_stat->buckets_ptrs = (s_bucket **)encoder->usr->malloc(encoder->usr,
                                                                  n_buckets_ptrs *
                                                                  sizeof(s_bucket *));
    if (!family_stat->buckets_ptrs) {
        return (0);
    }

    family_stat->counters = (COUNTER *)encoder->usr->malloc(encoder->usr,
                                                            n_buckets * sizeof(COUNTER) *
                                                            8);
    if (!family_stat->counters) {
        goto error_1;
    }

    family_stat->buckets_buf = (s_bucket *)encoder->usr->malloc(encoder->usr,
                                                                n_buckets * sizeof(s_bucket));
    if (!family_stat->buckets_buf) {
        goto error_2;
    }

    fill_model_structures(encoder, family_stat, rep_first, first_size, rep_next, mul_size, levels,
                          ncounters, n_buckets, n_buckets_ptrs);

    return (!(0));

error_2:
    encoder->usr->free(encoder->usr, family_stat->counters);

error_1:
    encoder->usr->free(encoder->usr, family_stat->buckets_ptrs);

    return (0);
}

static void free_family_stat(QuicUsrContext *usr, FamilyStat *family_stat)
{
    usr->free(usr, family_stat->buckets_ptrs);
    usr->free(usr, family_stat->counters);
    usr->free(usr, family_stat->buckets_buf);
}

static int init_channel(Encoder *encoder, Channel *channel)
{
    unsigned int ncounters;
    unsigned int levels;
    unsigned int rep_first;
    unsigned int first_size;
    unsigned int rep_next;
    unsigned int mul_size;
    unsigned int n_buckets;
    unsigned int n_buckets_ptrs;

    channel->encoder = encoder;
    channel->state.encoder = encoder;
    channel->correlate_row_width = 0;
    channel->correlate_row = ((void *)0);

    find_model_params(encoder, 8, &ncounters, &levels, &n_buckets_ptrs, &rep_first,
                      &first_size, &rep_next, &mul_size, &n_buckets);
    encoder->n_buckets_8bpc = n_buckets;
    if (!init_model_structures(encoder, &channel->family_stat_8bpc, rep_first, first_size,
                               rep_next, mul_size, levels, ncounters, n_buckets_ptrs,
                               n_buckets)) {
        return (0);
    }

    find_model_params(encoder, 5, &ncounters, &levels, &n_buckets_ptrs, &rep_first,
                      &first_size, &rep_next, &mul_size, &n_buckets);
    encoder->n_buckets_5bpc = n_buckets;
    if (!init_model_structures(encoder, &channel->family_stat_5bpc, rep_first, first_size,
                               rep_next, mul_size, levels, ncounters, n_buckets_ptrs,
                               n_buckets)) {
        free_family_stat(encoder->usr, &channel->family_stat_8bpc);
        return (0);
    }

    return (!(0));
}

static void destroy_channel(Channel *channel)
{
    QuicUsrContext *usr = channel->encoder->usr;
    if (channel->correlate_row) {
        usr->free(usr, channel->correlate_row - 1);
    }
    free_family_stat(usr, &channel->family_stat_8bpc);
    free_family_stat(usr, &channel->family_stat_5bpc);
}

static int init_encoder(Encoder *encoder, QuicUsrContext *usr)
{
    int i;

    encoder->usr = usr;
    encoder->rgb_state.encoder = encoder;

    for (i = 0; i < 4; i++) {
        if (!init_channel(encoder, &encoder->channels[i])) {
            for (--i; i >= 0; i--) {
                destroy_channel(&encoder->channels[i]);
            }
            return (0);
        }
    }
    return (!(0));
}

static int encoder_reste(Encoder *encoder, uint32_t *io_ptr, uint32_t *io_ptr_end)
{
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (((unsigned long)io_ptr % 4) == ((unsigned long)io_ptr_end % 4)) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1079", __FUNCTION__, "assertion `%s' failed","((unsigned long)io_ptr % 4) == ((unsigned long)io_ptr_end % 4)"); } while (0); } } while (0);
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (io_ptr <= io_ptr_end) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1080", __FUNCTION__, "assertion `%s' failed","io_ptr <= io_ptr_end"); } while (0); } } while (0);

    encoder->rgb_state.waitcnt = 0;
    encoder->rgb_state.tabrand_seed = stabrand();
    encoder->rgb_state.wmidx = 0;
    encoder->rgb_state.wmileft = wminext;
    set_wm_trigger(&encoder->rgb_state);


    encoder_init_rle(&encoder->rgb_state);


    encoder->io_words_count = io_ptr_end - io_ptr;
    encoder->io_now = io_ptr;
    encoder->io_end = io_ptr_end;
    encoder->rows_completed = 0;

    return (!(0));
}

static int encoder_reste_channels(Encoder *encoder, int channels, int width, int bpc)
{
    int i;

    encoder->num_channels = channels;

    for (i = 0; i < channels; i++) {
        s_bucket *bucket;
        s_bucket *end_bucket;

        if (encoder->channels[i].correlate_row_width < width) {
            encoder->channels[i].correlate_row_width = 0;
            if (encoder->channels[i].correlate_row) {
                encoder->usr->free(encoder->usr, encoder->channels[i].correlate_row - 1);
            }
            if (!(encoder->channels[i].correlate_row = (BYTE *)encoder->usr->malloc(encoder->usr,
                                                                                    width + 1))) {
                return (0);
            }
            encoder->channels[i].correlate_row++;
            encoder->channels[i].correlate_row_width = width;
        }

        if (bpc == 8) {
            memset(encoder->channels[i].family_stat_8bpc.counters, 0, encoder->n_buckets_8bpc * sizeof(COUNTER) * 8)
                                                                             ;
            bucket = encoder->channels[i].family_stat_8bpc.buckets_buf;
            end_bucket = bucket + encoder->n_buckets_8bpc;
            for (; bucket < end_bucket; bucket++) {
                bucket->bestcode = 8 - 1;
            }
            encoder->channels[i]._buckets_ptrs = encoder->channels[i].family_stat_8bpc.buckets_ptrs;
        } else if (bpc == 5) {
            memset(encoder->channels[i].family_stat_5bpc.counters, 0, encoder->n_buckets_5bpc * sizeof(COUNTER) * 8)
                                                                             ;
            bucket = encoder->channels[i].family_stat_5bpc.buckets_buf;
            end_bucket = bucket + encoder->n_buckets_5bpc;
            for (; bucket < end_bucket; bucket++) {
                bucket->bestcode = 5 - 1;
            }
            encoder->channels[i]._buckets_ptrs = encoder->channels[i].family_stat_5bpc.buckets_ptrs;
        } else {
            encoder->usr->warn(encoder->usr, "%s: bad bpc %d\n", __FUNCTION__, bpc);
            return (0);
        }

        encoder->channels[i].state.waitcnt = 0;
        encoder->channels[i].state.tabrand_seed = stabrand();
        encoder->channels[i].state.wmidx = 0;
        encoder->channels[i].state.wmileft = wminext;
        set_wm_trigger(&encoder->channels[i].state);


        encoder_init_rle(&encoder->channels[i].state);

    }
    return (!(0));
}

static void quic_image_params(Encoder *encoder, QuicImageType type, int *channels, int *bpc)
{
    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (channels && bpc) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1161", __FUNCTION__, "assertion `%s' failed","channels && bpc"); } while (0); } } while (0);
    switch (type) {
    case QUIC_IMAGE_TYPE_GRAY:
        *channels = 1;
        *bpc = 8;
        break;
    case QUIC_IMAGE_TYPE_RGB16:
        *channels = 3;
        *bpc = 5;



        break;
    case QUIC_IMAGE_TYPE_RGB24:
        *channels = 3;
        *bpc = 8;
        break;
    case QUIC_IMAGE_TYPE_RGB32:
        *channels = 3;
        *bpc = 8;
        break;
    case QUIC_IMAGE_TYPE_RGBA:
        *channels = 4;
        *bpc = 8;
        break;
    case QUIC_IMAGE_TYPE_INVALID:
    default:
        *channels = 0;
        *bpc = 0;
        encoder->usr->error(encoder->usr, "bad image type\n");
    }
}

int quic_encode(QuicContext *quic, QuicImageType type, int width, int height,
                uint8_t *line, unsigned int num_lines, int stride,
                uint32_t *io_ptr, unsigned int num_io_words)
{
    Encoder *encoder = (Encoder *)quic;
    uint32_t *io_ptr_end = io_ptr + num_io_words;
    uint8_t *lines_end;
    int row;
    uint8_t *prev;
    int channels;
    int bpc;




    lines_end = line + num_lines * stride;
    if (line == ((void *)0) && lines_end != line) {
        do { spice_log("Spice", SPICE_LOG_LEVEL_WARNING, "quic.c" ":" "1243", __FUNCTION__, "should not be reached"); } while (0);
        return -1;
    }

    quic_image_params(encoder, type, &channels, &bpc);

    if (!encoder_reste(encoder, io_ptr, io_ptr_end) ||
        !encoder_reste_channels(encoder, channels, width, bpc)) {
        return -1;
    }

    encoder->io_word = 0;
    encoder->io_available_bits = 32;

    encode_32(encoder, (*(uint32_t *)"QUIC"));
    encode_32(encoder, ((0U << 16) | (0U & 0xffff)));
    encode_32(encoder, type);
    encode_32(encoder, width);
    encode_32(encoder, height);

    { if (line == lines_end) { int n = encoder->usr->more_lines(encoder->usr, &line); if (n <= 0 || line == ((void *)0)) { encoder->usr->error(encoder->usr, "more lines failed\n"); } lines_end = line + n * stride; } };

    switch (type) {

    case QUIC_IMAGE_TYPE_RGB32:
        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= width * 4) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1268", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= width * 4"); } while (0); } } while (0);
        encoder->channels[0].correlate_row[-1] = 0; encoder->channels[1].correlate_row[-1] = 0; encoder->channels[2].correlate_row[-1] = 0; quic_rgb32_compress_row0(encoder, (rgb32_pixel_t *)(line), width); encoder->rows_completed++; for (row = 1; row < height; row++) { prev = line; { line += stride; { if (line == lines_end) { int n = encoder->usr->more_lines(encoder->usr, &line); if (n <= 0 || line == ((void *)0)) { encoder->usr->error(encoder->usr, "more lines failed\n"); } lines_end = line + n * stride; } }; }; encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0]; encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0]; encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0]; quic_rgb32_compress_row(encoder, (rgb32_pixel_t *)prev, (rgb32_pixel_t *)line, width); encoder->rows_completed++; };
        break;
    case QUIC_IMAGE_TYPE_RGB24:
        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= width * 3) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1272", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= width * 3"); } while (0); } } while (0);
        encoder->channels[0].correlate_row[-1] = 0; encoder->channels[1].correlate_row[-1] = 0; encoder->channels[2].correlate_row[-1] = 0; quic_rgb24_compress_row0(encoder, (rgb24_pixel_t *)(line), width); encoder->rows_completed++; for (row = 1; row < height; row++) { prev = line; { line += stride; { if (line == lines_end) { int n = encoder->usr->more_lines(encoder->usr, &line); if (n <= 0 || line == ((void *)0)) { encoder->usr->error(encoder->usr, "more lines failed\n"); } lines_end = line + n * stride; } }; }; encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0]; encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0]; encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0]; quic_rgb24_compress_row(encoder, (rgb24_pixel_t *)prev, (rgb24_pixel_t *)line, width); encoder->rows_completed++; };
        break;
    case QUIC_IMAGE_TYPE_RGB16:
        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= width * 2) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1276", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= width * 2"); } while (0); } } while (0);
        encoder->channels[0].correlate_row[-1] = 0; encoder->channels[1].correlate_row[-1] = 0; encoder->channels[2].correlate_row[-1] = 0; quic_rgb16_compress_row0(encoder, (rgb16_pixel_t *)(line), width); encoder->rows_completed++; for (row = 1; row < height; row++) { prev = line; { line += stride; { if (line == lines_end) { int n = encoder->usr->more_lines(encoder->usr, &line); if (n <= 0 || line == ((void *)0)) { encoder->usr->error(encoder->usr, "more lines failed\n"); } lines_end = line + n * stride; } }; }; encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0]; encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0]; encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0]; quic_rgb16_compress_row(encoder, (rgb16_pixel_t *)prev, (rgb16_pixel_t *)line, width); encoder->rows_completed++; };
        break;
    case QUIC_IMAGE_TYPE_RGBA:
        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= width * 4) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1280", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= width * 4"); } while (0); } } while (0);

        encoder->channels[0].correlate_row[-1] = 0;
        encoder->channels[1].correlate_row[-1] = 0;
        encoder->channels[2].correlate_row[-1] = 0;
        quic_rgb32_compress_row0(encoder, (rgb32_pixel_t *)(line), width);

        encoder->channels[3].correlate_row[-1] = 0;
        quic_four_compress_row0(encoder, &encoder->channels[3], (four_bytes_t *)(line + 3), width);

        encoder->rows_completed++;

        for (row = 1; row < height; row++) {
            prev = line;
            { line += stride; { if (line == lines_end) { int n = encoder->usr->more_lines(encoder->usr, &line); if (n <= 0 || line == ((void *)0)) { encoder->usr->error(encoder->usr, "more lines failed\n"); } lines_end = line + n * stride; } }; };
            encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0];
            encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0];
            encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0];
            quic_rgb32_compress_row(encoder, (rgb32_pixel_t *)prev, (rgb32_pixel_t *)line, width);

            encoder->channels[3].correlate_row[-1] = encoder->channels[3].correlate_row[0];
            quic_four_compress_row(encoder, &encoder->channels[3], (four_bytes_t *)(prev + 3),
                                   (four_bytes_t *)(line + 3), width);
            encoder->rows_completed++;
        }
        break;

    case QUIC_IMAGE_TYPE_GRAY:
        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= width) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1348", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= width"); } while (0); } } while (0);
        encoder->channels[0].correlate_row[-1] = 0;
        quic_one_compress_row0(encoder, &encoder->channels[0], (one_byte_t *)line, width);
        encoder->rows_completed++;
        for (row = 1; row < height; row++) {
            prev = line;
            { line += stride; { if (line == lines_end) { int n = encoder->usr->more_lines(encoder->usr, &line); if (n <= 0 || line == ((void *)0)) { encoder->usr->error(encoder->usr, "more lines failed\n"); } lines_end = line + n * stride; } }; };
            encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0];
            quic_one_compress_row(encoder, &encoder->channels[0], (one_byte_t *)prev,
                                  (one_byte_t *)line, width);
            encoder->rows_completed++;
        }
        break;
    case QUIC_IMAGE_TYPE_INVALID:
    default:
        encoder->usr->error(encoder->usr, "bad image type\n");
    }

    flush(encoder);
    encoder->io_words_count -= (encoder->io_end - encoder->io_now);

    return encoder->io_words_count;
}

int quic_decode_begin(QuicContext *quic, uint32_t *io_ptr, unsigned int num_io_words,
                      QuicImageType *out_type, int *out_width, int *out_height)
{
    Encoder *encoder = (Encoder *)quic;
    uint32_t *io_ptr_end = io_ptr + num_io_words;
    QuicImageType type;
    int width;
    int height;
    uint32_t magic;
    uint32_t version;
    int channels;
    int bpc;

    if (!encoder_reste(encoder, io_ptr, io_ptr_end)) {
        return -1;
    }

    init_decode_io(encoder);

    magic = encoder->io_word;
    decode_eat32bits(encoder);
    if (magic != (*(uint32_t *)"QUIC")) {
        encoder->usr->warn(encoder->usr, "bad magic\n");
        return -1;
    }

    version = encoder->io_word;
    decode_eat32bits(encoder);
    if (version != ((0U << 16) | (0U & 0xffff))) {
        encoder->usr->warn(encoder->usr, "bad version\n");
        return -1;
    }

    type = (QuicImageType)encoder->io_word;
    decode_eat32bits(encoder);

    width = encoder->io_word;
    decode_eat32bits(encoder);

    height = encoder->io_word;
    decode_eat32bits(encoder);

    quic_image_params(encoder, type, &channels, &bpc);

    if (!encoder_reste_channels(encoder, channels, width, bpc)) {
        return -1;
    }

    *out_width = encoder->width = width;
    *out_height = encoder->height = height;
    *out_type = encoder->type = type;
    return 0;
}

static void uncompress_rgba(Encoder *encoder, uint8_t *buf, int stride)
{
    unsigned int row;
    uint8_t *prev;

    encoder->channels[0].correlate_row[-1] = 0;
    encoder->channels[1].correlate_row[-1] = 0;
    encoder->channels[2].correlate_row[-1] = 0;
    quic_rgb32_uncompress_row0(encoder, (rgb32_pixel_t *)buf, encoder->width);

    encoder->channels[3].correlate_row[-1] = 0;
    quic_four_uncompress_row0(encoder, &encoder->channels[3], (four_bytes_t *)(buf + 3),
                              encoder->width);

    encoder->rows_completed++;
    for (row = 1; row < encoder->height; row++) {
        prev = buf;
        buf += stride;

        encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0];
        encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0];
        encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0];
        quic_rgb32_uncompress_row(encoder, (rgb32_pixel_t *)prev, (rgb32_pixel_t *)buf,
                                  encoder->width);

        encoder->channels[3].correlate_row[-1] = encoder->channels[3].correlate_row[0];
        quic_four_uncompress_row(encoder, &encoder->channels[3], (four_bytes_t *)(prev + 3),
                                 (four_bytes_t *)(buf + 3), encoder->width);

        encoder->rows_completed++;
    }
}



static void uncompress_gray(Encoder *encoder, uint8_t *buf, int stride)
{
    unsigned int row;
    uint8_t *prev;

    encoder->channels[0].correlate_row[-1] = 0;
    quic_one_uncompress_row0(encoder, &encoder->channels[0], (one_byte_t *)buf, encoder->width);
    encoder->rows_completed++;
    for (row = 1; row < encoder->height; row++) {
        prev = buf;
        buf += stride;
        encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0];
        quic_one_uncompress_row(encoder, &encoder->channels[0], (one_byte_t *)prev,
                                (one_byte_t *)buf, encoder->width);
        encoder->rows_completed++;
    }
}

int quic_decode(QuicContext *quic, QuicImageType type, uint8_t *buf, int stride)
{
    Encoder *encoder = (Encoder *)quic;
    unsigned int row;
    uint8_t *prev;




    do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (buf) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1518", __FUNCTION__, "assertion `%s' failed","buf"); } while (0); } } while (0);

    switch (encoder->type) {

    case QUIC_IMAGE_TYPE_RGB32:
    case QUIC_IMAGE_TYPE_RGB24:
        if (type == QUIC_IMAGE_TYPE_RGB32) {
            do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= (int)encoder->width * 4) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1525", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= (int)encoder->width * 4"); } while (0); } } while (0);
            encoder->channels[0].correlate_row[-1] = 0;
            encoder->channels[1].correlate_row[-1] = 0;
            encoder->channels[2].correlate_row[-1] = 0;
            quic_rgb32_uncompress_row0(encoder, (rgb32_pixel_t *)buf, encoder->width);
            encoder->rows_completed++;
            for (row = 1; row < encoder->height; row++) 
            {
                prev = buf;
                buf += stride;
                encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0];
                encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0];
                encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0];
                quic_rgb32_uncompress_row(encoder, (rgb32_pixel_t *)prev, (rgb32_pixel_t *)buf, encoder->width);
                encoder->rows_completed++; 
            };
            break;
        } else if (type == QUIC_IMAGE_TYPE_RGB24) {
            do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= (int)encoder->width * 3) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1529", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= (int)encoder->width * 3"); } while (0); } } while (0);
            encoder->channels[0].correlate_row[-1] = 0; encoder->channels[1].correlate_row[-1] = 0; encoder->channels[2].correlate_row[-1] = 0; quic_rgb24_uncompress_row0(encoder, (rgb24_pixel_t *)buf, encoder->width); encoder->rows_completed++; for (row = 1; row < encoder->height; row++) { prev = buf; buf += stride; encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0]; encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0]; encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0]; quic_rgb24_uncompress_row(encoder, (rgb24_pixel_t *)prev, (rgb24_pixel_t *)buf, encoder->width); encoder->rows_completed++; };
            break;
        }
        encoder->usr->warn(encoder->usr, "unsupported output format\n");
        return -1;
    case QUIC_IMAGE_TYPE_RGB16:
        if (type == QUIC_IMAGE_TYPE_RGB16) {
            do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= (int)encoder->width * 2) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1537", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= (int)encoder->width * 2"); } while (0); } } while (0);
            encoder->channels[0].correlate_row[-1] = 0; encoder->channels[1].correlate_row[-1] = 0; encoder->channels[2].correlate_row[-1] = 0; quic_rgb16_uncompress_row0(encoder, (rgb16_pixel_t *)buf, encoder->width); encoder->rows_completed++; for (row = 1; row < encoder->height; row++) { prev = buf; buf += stride; encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0]; encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0]; encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0]; quic_rgb16_uncompress_row(encoder, (rgb16_pixel_t *)prev, (rgb16_pixel_t *)buf, encoder->width); encoder->rows_completed++; };
        } else if (type == QUIC_IMAGE_TYPE_RGB32) {
            do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= (int)encoder->width * 4) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1540", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= (int)encoder->width * 4"); } while (0); } } while (0);
            encoder->channels[0].correlate_row[-1] = 0; encoder->channels[1].correlate_row[-1] = 0; encoder->channels[2].correlate_row[-1] = 0; quic_rgb16_to_32_uncompress_row0(encoder, (rgb32_pixel_t *)buf, encoder->width); encoder->rows_completed++; for (row = 1; row < encoder->height; row++) { prev = buf; buf += stride; encoder->channels[0].correlate_row[-1] = encoder->channels[0].correlate_row[0]; encoder->channels[1].correlate_row[-1] = encoder->channels[1].correlate_row[0]; encoder->channels[2].correlate_row[-1] = encoder->channels[2].correlate_row[0]; quic_rgb16_to_32_uncompress_row(encoder, (rgb32_pixel_t *)prev, (rgb32_pixel_t *)buf, encoder->width); encoder->rows_completed++; };
        } else {
            encoder->usr->warn(encoder->usr, "unsupported output format\n");
            return -1;
        }

        break;
    case QUIC_IMAGE_TYPE_RGBA:

        if (type != QUIC_IMAGE_TYPE_RGBA) {
            encoder->usr->warn(encoder->usr, "unsupported output format\n");
            return -1;
        }
        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= (int)encoder->width * 4) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1554", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= (int)encoder->width * 4"); } while (0); } } while (0);
        uncompress_rgba(encoder, buf, stride);
        break;

    case QUIC_IMAGE_TYPE_GRAY:

        if (type != QUIC_IMAGE_TYPE_GRAY) {
            encoder->usr->warn(encoder->usr, "unsupported output format\n");
            return -1;
        }
        do { if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((((stride) < 0) ? -(stride) : (stride)) >= (int)encoder->width) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) { } else { do { spice_log("Spice", SPICE_LOG_LEVEL_ERROR, "quic.c" ":" "1630", __FUNCTION__, "assertion `%s' failed","ABS(stride) >= (int)encoder->width"); } while (0); } } while (0);
        uncompress_gray(encoder, buf, stride);
        break;
    case QUIC_IMAGE_TYPE_INVALID:
    default:
        encoder->usr->error(encoder->usr, "bad image type\n");
    }
    return 0;
}

static int need_init = (!(0));

QuicContext *quic_create(QuicUsrContext *usr)
{
    Encoder *encoder;

    if (!usr || need_init || !usr->error || !usr->warn || !usr->info || !usr->malloc ||
        !usr->free || !usr->more_space || !usr->more_lines) {
        return ((void *)0);
    }

    if (!(encoder = (Encoder *)usr->malloc(usr, sizeof(Encoder)))) {
        return ((void *)0);
    }

    if (!init_encoder(encoder, usr)) {
        usr->free(usr, encoder);
        return ((void *)0);
    }
    return (QuicContext *)encoder;
}

void quic_destroy(QuicContext *quic)
{
    Encoder *encoder = (Encoder *)quic;
    int i;

    if (!quic) {
        return;
    }

    for (i = 0; i < 4; i++) {
        destroy_channel(&encoder->channels[i]);
    }
    encoder->usr->free(encoder->usr, encoder);
}

void quic_init(void)
{
    if (!need_init) {
        return;
    }
    need_init = (0);

    family_init(&family_8bpc, 8, 26);
    family_init(&family_5bpc, 5, 26);

    init_zeroLUT();

}









#include <stdarg.h>

void spice_log(const char *log_domain,
               SpiceLogLevel log_level,
               const char *strloc,
               const char *function,
               const char *format,
               ...)
{
    va_list ap;

    fprintf(stderr, "%s-%s-%s: ", log_domain, strloc, function);
    va_start(ap, format);
    vfprintf(stderr, format, ap);
    va_end(ap);

}
void usr_msg(QuicUsrContext *usr, const char *fmt, ...)
{
    va_list ap;

    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);

}

void *usr_malloc(QuicUsrContext *usr, int size)
{
    return malloc(size);
}

void usr_free(QuicUsrContext *usr, void *ptr)
{
    free(ptr);
}

int usr_more_space(QuicUsrContext *usr, uint32_t **io_ptr, int rows_completed)
{
printf("wants more space, complete is %d\n", rows_completed);
    return 0;
}
int usr_more_lines(QuicUsrContext *usr, uint8_t **lines)
{
printf("what does more_lines mean?\n");
    return 0;
}

void print_a_line(uint8_t *p, int width)
{
    uint32_t *pixel = (uint32_t *) p;
    for (; width > 0; width--)
    {
        int r, g, b, a;
        p = (uint8_t *) pixel++;
        b = *(p++);
        g = *(p++);
        r = *(p++);
        a = *(p++);
        printf("%02x,%02x,%02x,%02x|", r, g, b, a);
    }
    printf("\n");
}

QuicContext *simple_quic_init(void)
{
    QuicUsrContext *usr = malloc(sizeof(*usr));

    usr->warn = usr->error = usr->info = usr_msg;
    usr->malloc = usr_malloc;
    usr->free = usr_free;
    usr->more_space = usr_more_space;
    usr->more_lines = usr_more_lines;

    quic_init();
    return quic_create(usr);
}

void simple_quic_term(QuicContext *q)
{
    quic_destroy(q);
}

int simple_quic_decode(QuicContext *q, uint8_t *in, int inlen, 
        QuicImageType *type, int *width, int *height, uint8_t **out)
{
    int rc;
    int stride = 4; /* FIXME - proper stride calc please */
    rc = quic_decode_begin(q, (uint32_t *)in, inlen / sizeof(uint32_t),
              type, width, height);
    if (rc != 0)
        return rc;
    if (*type != QUIC_IMAGE_TYPE_RGB32 && *type != QUIC_IMAGE_TYPE_RGBA)
    {
        fprintf(stderr, "Error - can't handle type %d yet\n", *type);
        return -1;
    }

    *out = malloc((*width) * (*height) * stride);
    **out = 69;
    rc = quic_decode(q, *type, *out, (*width) * stride);
    return rc;
}

int quic_decode_js(uint8_t *in, int inlen)
{
        int rc;
        QuicImageType type;
        int width;
        int height;
        uint8_t *out;

    static QuicContext *q = 0;
    if (!q)
        q = simple_quic_init();

    rc = simple_quic_decode(q, in, inlen, &type, &width, &height, &out);

    /* Hack the Javascript *here* */
    return rc;
}

void one_timeloop(uint8_t *in, int inlen)
{
    int rc;
    QuicImageType type;
    int width;
    int height;
    uint8_t *out;

    QuicContext *q = simple_quic_init();

    rc = simple_quic_decode(q, in, inlen, &type, &width, &height, &out);
    if (rc != 0)
        fprintf(stderr, "Failure...");
    else
        free(out);

    simple_quic_term(q);
}


int main(int argc, char *argv[])
{
    QuicContext *q;
    uint8_t membuf1[] = { 0x51,0x55,0x49,0x43,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x80,0x81,0x81,0x81,0xFF,0xAB,0x80,0x80,0xFF,0xFF,0x24,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x58,0x07,0x00,0x80,0x00,0xD6,0x01,0x00,0x40,0xC0,0x75,0x00,0xFA,0x3F,0x7F,0x40,0xC0,0x3A,0x00,0x00,0x00,0xB0,0x0E,0x00,0xFF,0xF5,0xAF,0x03,0xD6,0x01,0x00,0xB0,0x80,0x75,0x00,0x00,0x8F,0x7F,0x1D,0x00,0x0E,0x00,0x80,0xFD,0xAC,0x03,0x00,0xB0,0xFA,0xEB,0x00,0x00,0x00,0x00,0xD8,0xFF,0x3A,0x00,0x00,0xEB,0xBF,0x0E,0x00,0xC0,0x00,0x80,0xFD,0xAF,0x03,0x00,0xB0,0x0E,0xEB,0x00,0x00,0xAC,0x00,0x40,0x92,0xFA,0x03,0x00,0xB0,0x0E,0xEB,0x00,0x00,0xAC,0xC0,0x3A,0x00,0x00,0x00,0xB0,0x0E,0x00,0xFF,0x97,0xAF,0x03,0xFE,0x6F,0xFF,0x97,0xFB,0xBF,0xFD,0xDF,0xED,0xFF,0xF6,0x7F,0xB7,0xFF,0xDB,0xFF,0xDF,0xFE,0x6F,0xFF,0x7F,0xFB,0xBF,0xFD,0xFF,0xED,0xFF,0xF6,0xFF,0xB7,0xFF,0xDB,0xFD,0xDF,0xFE,0x6F,0xF6,0x7F,0xFB,0xBF,0xDA,0xFF,0xED,0xFF,0x00,0x00,0x00,0x00 };
    uint8_t membuf2[] = { 0x51,0x55,0x49,0x43,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x20,0x03,0x00,0x00,0x58,0x02,0x00,0x00,0xFF,0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFD,0x00,0x30,0xFA,0xFF,0x00,0xD6,0x01,0x00,0x00,0x80,0x75,0x00,0x10,0x10,0x70,0x1D,0x00,0x00,0xCF,0x1B,0x0E,0x00,0x40,0x3B,0xB7,0x03,0x00,0xD0,0x00,0x50,0xD2,0xEB,0x00,0x00,0xAC,0x03,0x3A,0x00,0x00,0xEB,0x00,0xE0,0x39,0xFE,0x01,0x00,0x68,0x07,0x76,0x00,0x00,0xDA,0x92,0x00,0x10,0xF8,0x08,0xFA,0xFA,0xFA,0xED,0x00,0x00,0x00,0x40,0x3B,0x00,0x00,0xD5,0xDF,0x0E,0x00,0xB0,0x0E,0x00,0x80,0x00,0xAC,0x03,0x00,0xE7,0xF8,0xEB,0x00,0xA0,0x1D,0x00,0x80,0x00,0x68,0x07,0x00,0x40,0xC0,0xDB,0x01,0xAF,0xAF,0x2F,0x09,0x00,0x00,0x40,0xA0,0x07,0x00,0xA0,0x1D,0xDB,0x01,0x00,0x68,0x2F,0x09,0x60,0xF2,0x80,0xA0,0xAF,0xAF,0x80,0x76,0x00,0x00,0x00,0xA0,0x1D,0x00,0x00,0x30,0x6F,0x07,0x00,0x00,0xD6,0x01,0x1D,0x00,0x80,0x75,0x07,0x00,0x80,0x7C,0xDA,0x01,0x00,0x68,0xFF,0x76,0x00,0x00,0x07,0x00,0xC0,0xED,0xD6,0x01,0x00,0x58,0xFD,0x75,0x00,0x00,0x1D,0x00,0x80,0xE7,0x68,0x07,0x00,0xA0,0xC0,0xDB,0x01,0x00,0xB0,0x0E,0x00,0x40,0x00,0xAC,0x03,0x00,0xFD,0x55,0xEB,0x00,0x00,0xAC,0xFF,0xFD,0x7F,0x7F,0x7F,0x49,0xDF,0x5F,0x12,0xE0,0x24,0x60,0xF8,0xDF,0xF3,0xBF,0xBF,0xBF,0xF5,0xF5,0x25,0x81,0x0E,0x00,0x00,0xF4,0xB4,0x03,0x00,0xD0,0xF8,0xED,0x00,0x00,0xFD,0xFD,0x25,0x01,0x00,0x60,0x97,0xFF,0x00,0xC0,0x3A,0x00,0x03,0x00,0xB0,0x0E,0xED,0x00,0x00,0xAC,0x40,0x3B,0x00,0x00,0xC0,0xDE,0x0E,0x00,0x00,0x58,0x07,0x00,0x00,0x00,0xD6,0x01,0x00,0x00,0xF4,0x75,0x0E,0x00,0x40,0x3B,0xB7,0x03,0x00,0xD0,0x00,0x20,0xF5,0xFF,0x00,0x00,0xAC,0x03,0x3A,0x00,0x00,0xEB,0x00,0xC0,0xF3,0xFE,0x03,0x00,0xD0,0x0E,0xED,0x00,0x00,0xB4,0x07,0x00,0x20,0xE0,0xD6,0x01,0x00,0x58,0x80,0x75,0x00,0x00,0x00,0xA0,0x1D,0x00,0x01,0x00,0x68,0x07,0x24,0x00,0xCE,0xDB,0xF3,0xBF,0xBF,0xBF,0xC0,0xC0,0x24,0x40,0x41,0x41,0xC1,0xC0,0x80,0xBF,0xBF,0x3F,0x00,0x60,0x1D,0x00,0x01,0x00,0x58,0x07,0x76,0x00,0x00,0xD6,0xA0,0x1D,0x00,0x80,0x18,0x6F,0x07,0x00,0x00,0xD6,0x01,0x00,0x00,0x80,0x75,0x00,0x07,0x00,0x60,0x1D,0xDA,0x01,0x00,0x68,0xF3,0x76,0x00,0x00,0x06,0x06,0x26,0x01,0xFC,0xFD,0xFD,0x05,0xFF,0xFE,0xFE,0x92,0x75,0x00,0x00,0xEE,0x60,0x1D,0x00,0x80,0x00,0x58,0x07,0x00,0x00,0x00,0xDA,0x01,0x1D,0x00,0x80,0x76,0x7F,0x49,0xA0,0xBE,0x00,0xF8,0x7F,0x7F,0x00,0x60,0x1D,0x00,0x01,0x00,0x58,0x07,0x76,0x00,0x00,0xD6,0xA0,0x1D,0x00,0x80,0x60,0x6F,0x07,0x00,0x00,0xAC,0x03,0x00,0x00,0x00,0xEB,0x00,0x00,0x00,0xFA,0x3A,0x07,0x00,0xA0,0x1D,0xDB,0x01,0x00,0x68,0x00,0x60,0xF5,0xFF,0x00,0x00,0xAC,0x03,0x3A,0x00,0x00,0xEB,0x00,0xC0,0xF3,0xFE,0x03,0x00,0xD0,0x0E,0xED,0x00,0x00,0xB4,0x07,0x00,0x20,0xE0,0xD6,0x01,0x00,0x58,0x80,0x75,0x00,0x00,0x00,0xA0,0x1D,0x00,0x01,0x00,0x68,0x07,0x24,0x00,0xD4,0xDB,0xF0,0xBF,0xBF,0xBF,0xB0,0x0E,0x00,0x40,0x00,0xAC,0x03,0x00,0x00,0x00,0xEB,0x00,0x0E,0x00,0x40,0x3B,0xB4,0x03,0x00,0xD0,0x00,0xED,0x00,0x00,0x00,0x40,0x3B,0x00,0x0C,0x4C,0xD2,0x0E,0x04,0x04,0x0C,0x0C,0xC0,0x24,0x60,0x00,0x40,0xC0,0xC0,0xC0,0x00,0x00,0x1C,0x40,0x3A,0x00,0x00,0xEB,0xB0,0x0E,0x00,0xC0,0x00,0xB4,0x03,0x00,0x00,0x00,0xED,0x00,0x01,0x00,0x78,0x3B,0x76,0x00,0x00,0xDA,0xBE,0x1D,0x00,0x80,0x14,0x0A,0x85,0x70,0x04,0x0C,0x0C,0x0C,0x00,0x08,0x07,0x04,0x00,0x00,0xD6,0x01,0x1D,0x00,0x80,0x75,0x68,0x07,0x00,0x60,0x00,0xDA,0x01,0x00,0x0F,0xF3,0x76,0x00,0x83,0xDE,0xA3,0x47,0xFF,0xFF,0xF8,0xF1,0xA3,0x47,0x0F,0xB3,0x40,0x80,0xE7,0xDE,0x3F,0x7E,0x00,0x81,0xE8,0x11,0xF0,0x1F,0x00,0x00,0x7A,0xF4,0x1D,0x00,0x80,0x76,0x6F,0x07,0x00,0xA0,0x28,0x14,0x02,0x06,0xA0,0xAF,0xAF,0x4F,0x8F,0x1F,0x3F,0x80,0x84,0x42,0x21,0xF8,0x20,0xFA,0xFA,0xFA,0xFC,0xC7,0x8F,0x1F,0x4F,0x28,0x14,0x42,0x07,0xA2,0xAF,0xAF,0x10,0xFF,0xF1,0xE3,0x7F,0x7F,0x42,0xA1,0x85,0x42,0xE4,0x7F,0xFF,0xFD,0xFD,0x09,0x7D,0x42,0xA1,0x90,0x00,0x00,0x7D,0x7D,0x03,0x00,0xD0,0x0E,0xED,0x00,0x00,0xB4,0x13,0x0A,0x85,0xF0,0x1F,0xEA,0xEB,0xEB,0x42,0xFE,0xC7,0x8F,0x02,0x02,0x0A,0x85,0x1E,0x3D,0x7A,0x00,0xD0,0x0E,0x00,0x80,0x00,0xB4,0x03,0x00,0xF1,0xE3,0xED,0x00,0x1E,0xFD,0xFF,0xF8,0x00,0xA0,0x47,0x8F,0x01,0x00,0x68,0x07,0x76,0x00,0x00,0xDA,0x4F,0x28,0x14,0xF2,0x21,0xFE,0xEF,0xEF,0xFE,0xFE,0x84,0x42,0xD1,0xA3,0xC7,0xFF,0xDA,0x01,0x00,0xE8,0x80,0x76,0x00,0x00,0x50,0xBF,0x1D,0x00,0x7D,0x7D,0x42,0xA1,0xF8,0xF1,0x83,0x7D,0x84,0x42,0xA1,0xFF,0x49,0xFE,0xFE,0xFE,0x00,0x7D,0x7D,0x7D,0x00,0xA0,0x1D,0x00,0x01,0x00,0x68,0x07,0x3D,0x7A,0xF8,0xDB,0x1D,0x00,0x80,0x1E,0x68,0x07,0x00,0xA0,0xE4,0xDB,0x01,0x00,0x5F,0x9F,0x50,0x28,0x7E,0xFC,0x60,0x5F,0xA1,0x50,0xE8,0x3F,0xE0,0xBE,0xBE,0x3E,0xF2,0x3F,0x7E,0xFC,0xAF,0x4F,0x28,0x14,0x03,0x00,0xA0,0xAF,0xED,0x00,0x00,0xB4,0x7E,0x3B,0x00,0x00,0xF5,0x09,0x85,0x42,0xC7,0x0F,0xF6,0xF5,0x42,0x21,0xFF,0xE3,0xFB,0xFA,0xFA,0x84,0xFF,0xF1,0xE3,0x07,0xAC,0x03,0x00,0xE0,0x00,0xEB,0x00,0x00,0x00,0xC0,0x3A,0x00,0x03,0x00,0xD0,0x0E,0xED,0x00,0x00,0xB4,0xA3,0x47,0x0F,0xFE,0xF8,0xF1,0x83,0xDF,0xA1,0xFF,0xFF,0xFF,0xDF,0xA3,0x47,0x0F,0x00,0x81,0xC0,0xBC,0xF0,0x1F,0x3F,0x7E,0x7A,0xF4,0xE8,0x11,0x80,0x76,0x00,0x00,0x00,0xA0,0x1D,0x00,0x0A,0x0D,0x6F,0x07,0xF7,0xF7,0x27,0x14,0xAC,0x03,0x00,0xF0,0x00,0xEB,0x00,0x00,0x7F,0xD5,0x3A,0x00,0x0A,0x03,0x7F,0x7F,0xF7,0xF7,0x27,0x14,0x0C,0x0C,0x4C,0xF2,0xF8,0xFB,0xFB,0x0B,0x7F,0x42,0xA1,0x30,0x00,0x00,0x7F,0x7F,0x0E,0x00,0xC0,0x3A,0xAC,0x03,0x00,0xB0,0x00,0xED,0x00,0x00,0x00,0x40,0x3B,0x00,0xF4,0x08,0xDE,0x0E,0x00,0x00,0x3D,0x7A,0x0E,0x00,0x40,0x3B,0xB6,0x03,0x00,0xD0,0xF1,0x03,0x08,0x04,0xD1,0x03,0xFC,0xF8,0x3F,0x7E,0xF4,0xE8,0x00,0x81,0xC0,0x1F,0x7F,0x42,0xA1,0xB0,0xF1,0xE3,0x7F,0x7F,0x00,0x00,0xFC,0xF8,0x03,0x00,0xB0,0x0E,0xEB,0x00,0x00,0xAC,0x02,0x02,0x02,0x56,0x28,0x14,0x0A,0x21,0x08,0x18,0x18,0x18,0x82,0x82,0x02,0x08,0x7F,0x7F,0x7F,0x82,0xC0,0xC0,0xC0,0x24,0x04,0x40,0x40,0xC0,0x20,0xA0,0x50,0x28,0xD1,0xA3,0x07,0x20,0xF8,0xF1,0x03,0xE9,0xA1,0x50,0x88,0xFF,0xBF,0xC0,0xC0,0x40,0x50,0x98,0xBF,0xBF,0xBF,0xBF,0x3F,0xA1,0x60,0x1D,0x00,0x80,0x00,0x58,0x07,0x00,0x00,0x00,0xD6,0x01,0x1D,0x00,0x80,0x75,0x5C,0x07,0x00,0x60,0xDF,0x5F,0x30,0x18,0x84,0x42,0xE1,0xDF,0x02,0xFF,0xFE,0xFE,0x0A,0x85,0x04,0x04,0x0C,0x0C,0x0C,0x14,0x42,0x02,0x04,0x04,0x06,0x06,0x0A,0x85,0xFE,0xFD,0xFD,0x05,0xFD,0x09,0x85,0x42,0x3D,0x7A,0xFC,0xFD,0x05,0x83,0xC1,0x1E,0x42,0xFE,0xFD,0xFD,0xFD,0xFD,0x09,0x85,0x03,0x08,0x04,0xFE,0x00,0xFC,0xF8,0xF1,0x00,0x80,0x75,0x00,0x07,0x00,0x60,0x1D,0xDA,0x01,0x00,0x58,0x80,0x76,0x00,0x00,0x20,0xB0,0x1D,0x00,0x42,0xA1,0x90,0x40,0x7F,0x81,0x81,0x81,0x42,0xA1,0x7F,0x7F,0xFF,0xFE,0xFE,0x84,0x18,0x28,0x14,0x0A,0xF7,0xF7,0x17,0x18,0x4F,0x28,0x14,0xFA,0x20,0xF0,0xEF,0xEF,0xE8,0xD1,0xC3,0x40,0x1F,0x3F,0x7E,0xF4,0xC1,0x03,0x81,0xC0,0x02,0x7B,0xF4,0xE8,0x8F,0x1F,0x0C,0x04,0xFD,0xFF,0xFF,0xC7,0x1E,0x3D,0x7A,0x08,0x08,0x04,0xE6,0xFD,0xFF,0xF8,0xF1,0x03,0xA3,0x47,0x8F,0x80,0xB4,0x03,0x00,0xD0,0x00,0xED,0x00,0x00,0x30,0x78,0x3B,0x00,0x7D,0x42,0xA1,0x10,0xFD,0x09,0x7D,0x7D,0x00,0x00,0xFC,0xFD,0x3A,0x00,0x00,0xEB,0xB0,0x0E,0x00,0xC0,0x00,0xB4,0x03,0x00,0x00,0x00,0xED,0x00,0xD1,0x23,0x78,0x3B,0x00,0x00,0xF4,0xE8,0x3B,0x00,0x00,0xED,0xD0,0x0E,0x00,0x40,0x00,0xAC,0x03,0x00,0x00,0x00,0xEB,0x00,0xD1,0xA3,0xC7,0x3A,0xDF,0xDF,0xDF,0xE8,0xE8,0xD1,0xA3,0xC7,0x81,0x3F,0x7E,0xFC,0xA3,0x47,0x00,0x02,0x7E,0xFC,0xE8,0xD1,0x00,0x02,0x81,0x3F,0xD1,0xA3,0x47,0x8F,0x02,0x7F,0xFC,0xF8,0x50,0x08,0x02,0x04,0xBE,0xBE,0x3E,0xA1,0xFC,0xFB,0xFB,0x93,0x08,0x30,0x10,0x08,0xC0,0x40,0xA1,0x50,0x40,0x40,0xC0,0xC0,0x0A,0x0A,0x0A,0x42,0x02,0x06,0x06,0x06,0xD7,0x07,0x01,0x02,0x60,0x30,0xD8,0xD7,0xC0,0xBF,0xBF,0xBF,0x47,0x8F,0x00,0x81,0xF4,0xE8,0xD1,0xA3,0xDF,0xDF,0xDF,0x7A,0xEC,0xD1,0xA3,0xC7,0x20,0x60,0x30,0x18,0x0A,0x85,0x28,0x20,0x0C,0x0C,0x0C,0x14,0x82,0x05,0x04,0x04,0x7D,0x7D,0x82,0x82,0xF1,0xE3,0x07,0x7D,0x3F,0x7E,0xFC,0xF8,0xF4,0x00,0x02,0x81,0x8F,0x1F,0x3D,0x7A,0x40,0x20,0xF0,0xC7,0xE8,0xD1,0xA3,0x47,0x81,0x3F,0x7E,0xFC,0x1E,0x3D,0x02,0x02,0xF1,0xE3,0x47,0x8F,0x20,0x10,0x08,0xFC,0x1F,0x3D,0x7A,0xF4,0x20,0xF0,0xC7,0x8F,0xF4,0xE8,0xC1,0x40,0x8F,0x1E,0x3D,0x7A,0xFC,0xFB,0xFB,0x6B,0xF4,0x20,0x10,0x08,0x8F,0x1F,0x3D,0x7A,0x40,0x20,0xF0,0xC7,0x3D,0x7A,0xF4,0xE0,0x07,0x06,0x02,0x81,0x08,0xFC,0xF1,0xE3,0xFC,0xDF,0x3F,0x10,0x1E,0x3D,0x7A,0xD4,0x79,0x03,0x81,0xC0,0xFC,0x00,0x02,0x81,0x02,0x81,0x3F,0x7E,0x7A,0xF4,0x08,0x00,0xC7,0x8F,0x1F,0x3D,0x04,0x40,0x20,0xF0,0x50,0x28,0x14,0x02,0xEF,0x2F,0x30,0x30,0x3D,0x80,0xE0,0xEF,0xE3,0x47,0x8F,0x1E,0x7A,0xF4,0xF8,0xF1,0xC7,0x8F,0x1F,0x3D,0x08,0x40,0x20,0xF0,0x1F,0x3D,0x7A,0xF4,0xD1,0xE3,0xC7,0x8F,0x18,0x0C,0xF6,0xE8,0xE4,0xEF,0xEF,0x2F,0xFB,0x13,0x0A,0x85,0x50,0x28,0xFC,0xFB,0x60,0x60,0x60,0xA0,0x7A,0x08,0x20,0x20,0xC7,0x8F,0x1E,0x3D,0x20,0x10,0xF8,0xE3,0x0A,0x85,0x42,0x08,0xFD,0x05,0x06,0x06,0xF4,0x40,0xFC,0xFD,0x8F,0x1F,0x3D,0x7A,0x40,0x20,0xF0,0xC7,0x1E,0x3D,0x7A,0xD0,0xF8,0xE3,0xC7,0x8F,0xF5,0x41,0x20,0x10,0x3F,0x7E,0xF4,0xF5,0x01,0x81,0xC0,0x1F,0x8F,0xBE,0xBE,0x3E,0x10,0xF8,0xE3,0xC7,0xF4,0xE8,0x21,0x20,0x17,0x0C,0x06,0x7B,0x3D,0xF6,0xF7,0xF7,0xE3,0x47,0x8F,0x1E,0x10,0x08,0xFC,0xF1,0x1E,0x3D,0x7A,0x20,0xF8,0xE3,0xC7,0x8F,0x28,0x4C,0x20,0x10,0xDF,0xDF,0x9F,0x50,0x3D,0x80,0x40,0xE0,0xE3,0x47,0x8F,0x1E,0x10,0x08,0xFC,0xF1,0x3D,0x7A,0xF4,0x08,0xF0,0xC7,0x8F,0x1F,0xA3,0x47,0x40,0x20,0x7E,0xFC,0xE8,0xD1,0x02,0x02,0x81,0x3F,0x47,0x8F,0x1E,0x3D,0x08,0xFC,0xF1,0xE3,0x7A,0xF4,0x28,0x10,0x0B,0x06,0x83,0x3D,0x03,0xFF,0xFB,0xFB,0x7E,0xF4,0xE8,0xD1,0x81,0xC0,0x1F,0x3F,0xE8,0xD1,0x03,0x03,0x10,0x08,0x04,0xF6,0xE0,0x8F,0x1F,0x3F,0xFA,0xFF,0x81,0x40,0x3D,0x7A,0xF4,0x30,0xF3,0x06,0x02,0x81,0xF8,0x01,0x04,0x02,0x04,0x02,0x7F,0xFC,0xF4,0xE8,0x11,0x00,0x8F,0x1F,0x3F,0x7A,0x08,0x80,0x40,0xE0,0x8F,0x1E,0x3D,0x7A,0x10,0xF8,0xE3,0xC7,0x0A,0x85,0x00,0x20,0x00,0x04,0x04,0x14,0x1E,0x3F,0x7E,0xFC,0xD1,0xA3,0x47,0x8F,0x30,0x28,0xF4,0xE8,0x40,0x40,0xC0,0x60,0xD1,0xA3,0x47,0x0F,0x02,0x7F,0xFC,0xF8,0x0A,0x41,0x00,0x04,0xF7,0xF7,0x27,0x14,0x0F,0x20,0x10,0xF8,0xF8,0xD1,0xA3,0x47,0x1E,0x3D,0x7E,0xFC,0xF1,0xE3,0x47,0x8F,0x04,0x10,0x08,0xFC,0x47,0x8F,0x1E,0x3D,0x08,0xFC,0xF1,0xE3,0x3D,0x7A,0x04,0x10,0xE3,0xC7,0x8F,0x1E,0x04,0x20,0x10,0xF8,0x20,0xA0,0x50,0x28,0xF1,0xE3,0x07,0x20,0x04,0x10,0x08,0xFC,0xFE,0x84,0x42,0x21,0x04,0x02,0xFF,0xFE,0xA1,0x50,0x88,0x09,0xC0,0xC0,0xC0,0x40,0x82,0x40,0x40,0x40,0x81,0x81,0x82,0x82,0x82,0x82,0x82,0x81,0x81,0x7F,0x7F,0x7F,0x7D,0x7D,0x01,0x02,0xC7,0x8F,0x1F,0x7D,0x43,0x40,0x20,0xF0,0x7E,0xF4,0xE8,0xD1,0x81,0xC0,0x1F,0x3F,0x84,0x42,0x21,0x01,0x3D,0xFE,0xFE,0xFE,0xE3,0x47,0x8F,0x1E,0x10,0x08,0xFC,0xF1,0x28,0x14,0x0A,0x29,0x08,0x18,0x18,0x18,0x85,0x42,0x0A,0x08,0xFE,0xFD,0xFD,0x09,0xF1,0x03,0x08,0x04,0x28,0x14,0xFE,0xF8,0xE3,0xEF,0xEF,0x4F,0x7A,0xF4,0xE8,0xD1,0x30,0xD8,0x1E,0x3D,0x40,0x40,0xC0,0x60,0x7A,0xF4,0xE8,0x51,0xE0,0x8F,0x1F,0x3F,0xA3,0x07,0x81,0x40,0x7E,0xFC,0xE8,0xD1,0x04,0x02,0x81,0x3F,0xFD,0x09,0x85,0x42,0x3D,0x7A,0xFC,0xFD,0xE3,0xC7,0x8F,0x1E,0x48,0x20,0x10,0xF8,0xBF,0x3F,0xA1,0x50,0x03,0x81,0xC0,0xBF,0xD1,0xA3,0x47,0x0F,0x02,0x7F,0xFC,0xF8,0xA3,0x07,0x0F,0x04,0x10,0x08,0xEC,0xD1,0x1F,0x3F,0x7E,0x30,0xFF,0x03,0x81,0xC0,0x3D,0x7A,0x08,0xFD,0x02,0x81,0xC0,0x1E,0x02,0x81,0x60,0xB3,0x3F,0x7E,0xFC,0x00,0x11,0x00,0x02,0x81,0x3F,0x7A,0xF4,0xE8,0x40,0xE0,0x8F,0x1F,0x28,0x14,0x0E,0x80,0xB0,0xAF,0xAF,0x4F,0x7D,0x7D,0xC1,0x60,0xC7,0x8F,0x1F,0x7D,0xF6,0xE8,0xD1,0xE3,0xEF,0x2F,0x18,0x0C,0x85,0x42,0xE2,0xEF,0xF4,0xF5,0xF5,0x09,0xC0,0x60,0x30,0x18,0x14,0x0A,0x40,0x40,0x30,0x30,0x50,0x28,0x02,0x10,0x10,0x30,0x40,0xA1,0x50,0x08,0x47,0x0F,0x40,0x40,0x8F,0x1F,0xD0,0xA3,0x40,0x20,0xF0,0xC7,0xF0,0xC7,0x8F,0x1F,0x7D,0x7D,0x42,0xA1,0x0B,0x06,0x83,0x7D,0xFC,0xE8,0xEB,0xEB,0x02,0x81,0x3F,0x7E,0x0A,0x85,0x42,0x00,0x7A,0x00,0x02,0x02,0xFC,0x80,0x1E,0x3D,0x02,0x81,0x3F,0x7E,0xD1,0xA3,0x87,0x04,0x3F,0x7E,0xFC,0xE8,0x10,0x03,0x02,0x81,0x81,0x81,0x42,0xA1,0x80,0x80,0x80,0x81,0xF0,0xC7,0x8F,0x1F,0x7F,0x7F,0x42,0xA1,0x00,0x02,0x81,0x7F,0x1F,0x3D,0x7A,0xF4,0x20,0xF0,0xC7,0x8F,0x42,0xA1,0x70,0x40,0x30,0x7D,0x7D,0x7D,0x80,0x80,0xC1,0x60,0x47,0x8F,0x1E,0x80,0xFE,0xF8,0xF1,0xA3,0x3D,0x12,0x08,0x04,0xE3,0x47,0x8F,0x1E,0x10,0x08,0xFC,0xF1,0x09,0x0A,0x0A,0x2A,0x83,0xF5,0xF5,0xF5,0x04,0x04,0x0C,0x06,0x3D,0x7A,0xF4,0x00,0xFB,0x0B,0x06,0x83,0x50,0x08,0xFE,0xFB,0x40,0x40,0x40,0xA1,0xD0,0xA3,0x47,0x0F,0xC0,0x1F,0x3F,0x7E,0x3F,0x7E,0x00,0x81,0x09,0x85,0xC2,0x1F,0x83,0xF5,0xF5,0xF5,0x04,0x04,0x0C,0x06,0x3F,0x7E,0xFC,0x00,0xEB,0x13,0x0A,0x85,0x0C,0x06,0xEB,0xEB,0x0C,0x08,0x08,0x18,0xA3,0x47,0x8F,0x1E,0x04,0xFE,0xF8,0xF1,0x8F,0x1E,0x1C,0x08,0x40,0x20,0xB0,0x47,0x3F,0x7E,0xFC,0xC0,0xFF,0x07,0x02,0x81,0xF4,0xE8,0x41,0xF4,0x0D,0x04,0x02,0x7B,0x03,0x08,0x04,0xE6,0x04,0xFE,0xF8,0xF1,0xD1,0x23,0x00,0x08,0x3D,0x7A,0xF4,0xE8,0x3F,0x00,0x81,0x1E,0x40,0xE0,0x8F,0x1F,0x7A,0xF4,0x30,0x80,0xC7,0x8F,0x1F,0x3D,0x74,0x40,0x20,0xF0,0xB0,0xAF,0xAF,0x0F,0x80,0x80,0xC1,0x60,0x8F,0x1E,0xD1,0x80,0xF8,0xF1,0xA3,0x47,0x11,0x08,0x04,0xFE,0x27,0x14,0x0A,0x81,0x10,0xD8,0xD7,0xD7,0xE3,0xC7,0x0F,0x20,0x18,0x20,0x10,0xF8,0xC0,0x1E,0x3D,0x7A,0xE3,0x07,0x01,0x81,0x10,0x08,0xFC,0xF1,0xA3,0x87,0xD9,0x3F,0x10,0x08,0xEC,0xD1,0x20,0x10,0x98,0x37,0xF8,0xE3,0xC7,0x0F,0x0F,0x06,0x20,0x10,0xF8,0xD1,0xA3,0x47,0x04,0x02,0x7F,0xFC,0x7A,0xF4,0x88,0x08,0xC7,0x8F,0x1F,0x3D,0x42,0x40,0x20,0xF0,0x60,0x8F,0x1E,0x3D,0x7E,0x10,0x80,0x40,0x81,0xC0,0x1F,0x3F,0x8F,0xA2,0x63,0x03,0x10,0xD8,0xA3,0x47,0x20,0x30,0x6F,0x20,0xC7,0x8F,0x1F,0x40,0xDC,0x40,0x20,0xF0,0xF6,0xE8,0xD1,0x43,0xCC,0x15,0x08,0x04,0xE3,0x07,0x10,0x08,0x10,0x08,0xFC,0xF1,0x3D,0x7A,0x88,0x31,0x02,0x81,0xC0,0x1E,0x00,0x81,0xC0,0x1C,0xC0,0x1F,0x3F,0x7E,0x0F,0x71,0x02,0x81,0x10,0xD8,0xA3,0x47,0x10,0x98,0x43,0x20,0xE3,0xC7,0x0F,0x20,0x4E,0x20,0x10,0xF8,0x7B,0xF4,0xE8,0x21,0x73,0x08,0x04,0x02,0xF8,0x01,0x04,0x02,0x04,0x02,0x7F,0xFC,0x1E,0x3D,0xC4,0x09,0x81,0x40,0x60,0x8F,0x80,0x40,0x60,0x0E,0xE0,0x8F,0x1F,0x3F,0x87,0x38,0x81,0x40,0x08,0xEC,0xD1,0xA3,0x08,0xCC,0x21,0x10,0xF1,0xE3,0x07,0x10,0x27,0x10,0x08,0xFC,0x3D,0x7A,0xF4,0x10,0x39,0x04,0x02,0x81,0xFC,0x00,0x02,0x81,0x02,0x81,0x3F,0x7E,0x8F,0x1E,0xE2,0x04,0x40,0x20,0xB0,0x47,0x40,0x20,0x30,0x87,0xF0,0xC7,0x8F,0x1F,0x43,0x9C,0x40,0x20,0x04,0xF6,0xE8,0xD1,0x04,0xE6,0x10,0x08,0xF8,0xF1,0x03,0x08,0x13,0x08,0x04,0xFE,0x1E,0x3D,0x7A,0x88,0x1C,0x02,0x81,0xC0,0x7E,0x00,0x81,0xC0,0x81,0xC0,0x1F,0x3F,0x47,0x0F,0x71,0x02,0x20,0x10,0xD8,0xA3,0x20,0x10,0x98,0x43,0xF8,0xE3,0xC7,0x0F,0x21,0x4E,0x20,0x10,0x02,0x7B,0xF4,0xE8,0x02,0x73,0x08,0x04,0xFC,0xF8,0x01,0x04,0x09,0x04,0x02,0x7F,0x8F,0x1E,0x3D,0xC4,0x0E,0x81,0x40,0x60,0x3F,0x80,0x40,0x60,0x40,0xE0,0x8F,0x1F,0xA3,0x87,0x38,0x81,0x10,0x08,0xEC,0xD1,0x10,0x08,0xCC,0x21,0xFC,0xF1,0xE3,0x07,0x10,0x27,0x10,0x08,0x81,0x3D,0x7A,0xF4,0x81,0x39,0x04,0x02,0x7E,0xFC,0x00,0x02,0x04,0x02,0x81,0x3F,0x47,0x8F,0x1E,0xE2,0x87,0x40,0x20,0xB0,0x1F,0x40,0x20,0x30,0x20,0xF0,0xC7,0x8F,0xD1,0x43,0x9C,0x40,0x08,0x04,0xF6,0xE8,0x08,0x04,0xE6,0x10,0xFE,0xF8,0xF1,0x03,0x88,0x13,0x08,0x04,0xC0,0x1E,0x3D,0x7A,0xC0,0x1C,0x02,0x81,0x3F,0x7E,0x00,0x81,0x02,0x81,0xC0,0x1F,0xA3,0x47,0x0F,0x71,0x43,0x20,0x10,0xD8,0x0F,0x20,0x10,0x98,0x10,0xF8,0xE3,0xC7,0xE8,0x21,0x4E,0x20,0x04,0x02,0x7B,0xF4,0x04,0x02,0x73,0x08,0x7F,0xFC,0xF8,0x01,0xC4,0x09,0x04,0x02,0x60,0x8F,0x1E,0x3D,0x60,0x0E,0x81,0x40,0x1F,0x3F,0x80,0x40,0x81,0x40,0xE0,0x8F,0xD1,0xA3,0x87,0x38,0x21,0x10,0x08,0xEC,0x07,0x10,0x08,0xCC,0x08,0xFC,0xF1,0xE3,0xF4,0x10,0x27,0x10,0x02,0x81,0x3D,0x7A,0x02,0x81,0x39,0x04,0x3F,0x7E,0xFC,0x00,0xE2,0x04,0x02,0x81,0xB0,0x47,0x8F,0x1E,0x30,0x87,0x40,0x20,0x8F,0x1F,0x40,0x20,0x40,0x20,0xF0,0xC7,0xE8,0xD1,0x43,0x9C,0x10,0x08,0x04,0xF6,0x03,0x08,0x04,0xE6,0x04,0xFE,0xF8,0xF1,0x7A,0x88,0x13,0x08,0x81,0xC0,0x1E,0x3D,0x81,0xC0,0x1C,0x02,0x1F,0x3F,0x7E,0x00,0x71,0x02,0x81,0xC0,0xD8,0xA3,0x47,0x0F,0x98,0x43,0x20,0x10,0xC7,0x0F,0x20,0x10,0x20,0x10,0xF8,0xE3,0xF4,0xE8,0x21,0x4E,0x08,0x04,0x02,0x7B,0x01,0x04,0x02,0x73,0x02,0x7F,0xFC,0xF8,0x3D,0xC4,0x09,0x04,0x40,0x60,0x8F,0x1E,0x40,0x60,0x0E,0x81,0x8F,0x1F,0x3F,0x80,0x38,0x81,0x40,0xE0,0xEC,0xD1,0xA3,0x87,0xCC,0x21,0x10,0x08,0xE3,0x07,0x10,0x08,0x10,0x08,0xFC,0xF1,0x7A,0xF4,0x10,0x27,0x04,0x02,0x81,0x3D,0x00,0x02,0x81,0x39,0x81,0x3F,0x7E,0xFC,0x1E,0xE2,0x04,0x02,0x20,0xB0,0x47,0x8F,0x20,0x30,0x87,0x40,0xC7,0x8F,0x1F,0x40,0x9C,0x40,0x20,0xF0,0xF6,0xE8,0xD1,0x43,0xE6,0x10,0x08,0x04,0xF1,0x03,0x08,0x04,0x08,0x04,0xFE,0xF8,0x3D,0x7A,0x88,0x13,0x02,0x81,0xC0,0x1E,0x00,0x81,0xC0,0x1C,0xC0,0x1F,0x3F,0x7E,0x0F,0x71,0x02,0x81,0x10,0xD8,0xA3,0x47,0x10,0x98,0x43,0x20,0xE3,0xC7,0x0F,0x20,0x4E,0x20,0x10,0xF8,0x7B,0xF4,0xE8,0x21,0x73,0x08,0x04,0x02,0xF8,0x01,0x04,0x02,0x04,0x02,0x7F,0xFC,0x1E,0x3D,0xC4,0x09,0x81,0x40,0x60,0x8F,0x80,0x40,0x60,0x0E,0xE0,0x8F,0x1F,0x3F,0x87,0x38,0x81,0x40,0x08,0xEC,0xD1,0xA3,0x08,0xCC,0x21,0x10,0xF1,0xE3,0x07,0x10,0x27,0x10,0x08,0xFC,0x3D,0x7A,0xF4,0x10,0x39,0x04,0x02,0x81,0xFC,0x00,0x02,0x81,0x02,0x81,0x3F,0x7E,0x8F,0x1E,0xE2,0x04,0x40,0x20,0xB0,0x47,0x40,0x20,0x30,0x87,0xF0,0xC7,0x8F,0x1F,0x43,0x9C,0x40,0x20,0x04,0xF6,0xE8,0xD1,0x04,0xE6,0x10,0x08,0xF8,0xF1,0x03,0x08,0x13,0x08,0x04,0xFE,0x1E,0x3D,0x7A,0x88,0x1C,0x02,0x81,0xC0,0x7E,0x00,0x81,0xC0,0x81,0xC0,0x1F,0x3F,0x47,0x0F,0x71,0x02,0x20,0x10,0xD8,0xA3,0x20,0x10,0x98,0x43,0xF8,0xE3,0xC7,0x0F,0x21,0x4E,0x20,0x10,0x02,0x7B,0xF4,0xE8,0x02,0x73,0x08,0x04,0xFC,0xF8,0x01,0x04,0x09,0x04,0x02,0x7F,0x8F,0x1E,0x3D,0xC4,0x0E,0x81,0x40,0x60,0x3F,0x80,0x40,0x60,0x40,0xE0,0x8F,0x1F,0xA3,0x87,0x38,0x81,0x10,0x08,0xEC,0xD1,0x10,0x08,0xCC,0x21,0xFC,0xF1,0xE3,0x07,0x10,0x27,0x10,0x08,0x81,0x3D,0x7A,0xF4,0x81,0x39,0x04,0x02,0x7E,0xFC,0x00,0x02,0x04,0x02,0x81,0x3F,0x47,0x8F,0x1E,0xE2,0x87,0x40,0x20,0xB0,0x1F,0x40,0x20,0x30,0x20,0xF0,0xC7,0x8F,0xD1,0x43,0x9C,0x40,0x08,0x04,0xF6,0xE8,0x08,0x04,0xE6,0x10,0xFE,0xF8,0xF1,0x03,0x88,0x13,0x08,0x04,0xC0,0x1E,0x3D,0x7A,0xC0,0x1C,0x02,0x81,0x3F,0x7E,0x00,0x81,0x02,0x81,0xC0,0x1F,0xA3,0x47,0x0F,0x71,0x43,0x20,0x10,0xD8,0x07,0x08,0x08,0x98,0x10,0xF8,0xF7,0xF7,0xD7,0x27,0x4E,0x20,0x20,0x10,0xD8,0xD7,0x08,0x08,0x98,0x43,0xF8,0xF7,0xF7,0x07,0x27,0x4E,0x20,0x10,0x10,0xD8,0xD7,0xD7,0x08,0x98,0x43,0x20,0xF7,0xF7,0x07,0x08,0x4E,0x20,0x10,0xF8,0xD8,0xD7,0xD7,0x27,0x98,0x43,0x20,0x10,0xF7,0x07,0x08,0x08,0x20,0x10,0xF8,0xF7,0xD7,0xD7,0x27,0x4E,0x43,0x20,0x10,0xD8,0x07,0x08,0x08,0x98,0x10,0xF8,0xF7,0xF7,0xD7,0x27,0x4E,0x20,0x20,0x10,0xD8,0xD7,0x08,0x08,0x98,0x43,0xF8,0xF7,0xF7,0x07,0x27,0x4E,0x20,0x10,0x10,0xD8,0xD7,0xD7,0x08,0x98,0x43,0x20,0xF7,0xF7,0x07,0x08,0x4E,0x20,0x10,0xF8,0xD8,0xD7,0xD7,0x27,0x98,0x43,0x20,0x10,0xF7,0x07,0x08,0x08,0x20,0x10,0xF8,0xF7,0xD7,0xD7,0x27,0x4E,0x43,0x20,0x10,0xD8,0x01,0x08,0x08,0x98,0x02,0x7F,0xFC,0xF8,0x3D,0xC4,0x09,0x04,0x40,0x60,0x8F,0x1E,0x40,0x60,0x0E,0x81,0x8F,0x1F,0x3F,0x80,0x38,0x81,0x40,0xE0,0xEC,0xD1,0xA3,0x87,0xCC,0x21,0x10,0x08,0xE3,0x07,0x10,0x08,0x10,0x08,0xFC,0xF1,0x7A,0xF4,0x10,0x27,0x04,0x02,0x81,0x3D,0x00,0x02,0x81,0x39,0x81,0x3F,0x7E,0xFC,0x1E,0xE2,0x04,0x02,0x20,0xB0,0x47,0x8F,0x20,0x30,0x87,0x40,0xC7,0x8F,0x1F,0x40,0x9C,0x40,0x20,0xF0,0xF6,0xE8,0xD1,0x43,0xE6,0x10,0x08,0x04,0xF1,0x03,0x08,0x04,0x08,0x04,0xFE,0xF8,0x3D,0x7A,0x88,0x13,0x02,0x81,0xC0,0x1E,0x00,0x81,0xC0,0x1C,0xC0,0x1F,0x3F,0x7E,0x0F,0x71,0x02,0x81,0x10,0xD8,0xA3,0x47,0x10,0x98,0x43,0x20,0xE3,0xC7,0x0F,0x20,0x4E,0x20,0x10,0xF8,0x7B,0xF4,0xE8,0x21,0x73,0x08,0x04,0x02,0xF8,0x01,0x04,0x02,0x04,0x02,0x7F,0xFC,0x1E,0x3D,0xC4,0x09,0x81,0x40,0x60,0x8F,0x80,0x40,0x60,0x0E,0xE0,0x8F,0x1F,0x3F,0x87,0x38,0x81,0x40,0x08,0xEC,0xD1,0xA3,0x08,0xCC,0x21,0x10,0xF1,0xE3,0x07,0x10,0x27,0x10,0x08,0xFC,0x3D,0x7A,0xF4,0x10,0x39,0x04,0x02,0x81,0xFC,0x00,0x02,0x81,0x02,0x81,0x3F,0x7E,0x8F,0x1E,0xE2,0x04,0x40,0x20,0xB0,0x47,0x40,0x20,0x30,0x87,0xF0,0xC7,0x8F,0x1F,0x43,0x9C,0x40,0x20,0x04,0xF6,0xE8,0xD1,0x04,0xE6,0x10,0x08,0xF8,0xF1,0x03,0x08,0x13,0x08,0x04,0xFE,0x1E,0x3D,0x7A,0x88,0x1C,0x02,0x81,0xC0,0x7E,0x00,0x81,0xC0,0x81,0xC0,0x1F,0x3F,0x47,0x0F,0x71,0x02,0x20,0x10,0xD8,0xA3,0x20,0x10,0x98,0x43,0xF8,0xE3,0xC7,0x0F,0x21,0x4E,0x20,0x10,0x02,0x7B,0xF4,0xE8,0x02,0x73,0x08,0x04,0xFC,0xF8,0x01,0x04,0x09,0x04,0x02,0x7F,0x8F,0x1E,0x3D,0xC4,0x0E,0x81,0x40,0x60,0x3F,0x80,0x40,0x60,0x40,0xE0,0x8F,0x1F,0xA3,0x87,0x38,0x81,0x10,0x08,0xEC,0xD1,0x10,0x08,0xCC,0x21,0xFC,0xF1,0xE3,0x07,0x10,0x27,0x10,0x08,0x81,0x3D,0x7A,0xF4,0x81,0x39,0x04,0x02,0x7E,0xFC,0x00,0x02,0x04,0x02,0x81,0x3F,0x47,0x8F,0x1E,0xE2,0x87,0x40,0x20,0xB0,0x1F,0x40,0x20,0x30,0x20,0xF0,0xC7,0x8F,0xD1,0x43,0x9C,0x40,0x08,0x04,0xF6,0xE8,0x08,0x04,0xE6,0x10,0xFE,0xF8,0xF1,0x03,0x88,0x13,0x08,0x04,0xC0,0x1E,0x3D,0x7A,0xC0,0x1C,0x02,0x81,0x3F,0x7E,0x00,0x81,0x02,0x81,0xC0,0x1F,0xA3,0x47,0x0F,0x71,0x43,0x20,0x10,0xD8,0x0F,0x20,0x10,0x98,0x10,0xF8,0xE3,0xC7,0xE8,0x21,0x4E,0x20,0x04,0x02,0x7B,0xF4,0x04,0x02,0x73,0x08,0x7F,0xFC,0xF8,0x01,0xC4,0x09,0x04,0x02,0x60,0x8F,0x1E,0x3D,0x60,0x0E,0x81,0x40,0x1F,0x3F,0x80,0x40,0x81,0x40,0xE0,0x8F,0xD1,0xA3,0x87,0x38,0x21,0x10,0x08,0xEC,0x07,0x10,0x08,0xCC,0x08,0xFC,0xF1,0xE3,0xF4,0x10,0x27,0x10,0x02,0x81,0x3D,0x7A,0x02,0x81,0x39,0x04,0x3F,0x7E,0xFC,0x00,0xE2,0x04,0x02,0x81,0xB0,0x47,0x8F,0x1E,0x30,0x87,0x40,0x20,0x8F,0x1F,0x40,0x20,0x40,0x20,0xF0,0xC7,0xE8,0xD1,0x43,0x9C,0x10,0x08,0x04,0xF6,0x03,0x08,0x04,0xE6,0x04,0xFE,0xF8,0xF1,0x7A,0x88,0x13,0x08,0x81,0xC0,0x1E,0x3D,0x81,0xC0,0x1C,0x02,0x1F,0x3F,0x7E,0x00,0x71,0x02,0x81,0xC0,0xD8,0xA3,0x47,0x0F,0x98,0x43,0x20,0x10,0xC7,0x0F,0x20,0x10,0x20,0x10,0xF8,0xE3,0xF4,0xE8,0x21,0x4E,0x08,0x04,0x02,0x7B,0x01,0x04,0x02,0x73,0x02,0x7F,0xFC,0xF8,0x3D,0xC4,0x09,0x04,0x40,0x60,0x8F,0x1E,0x40,0x60,0x0E,0x81,0x8F,0x1F,0x3F,0x80,0x38,0x81,0x40,0xE0,0xEC,0xD1,0xA3,0x87,0xCC,0x21,0x10,0x08,0xE3,0x07,0x10,0x08,0x10,0x08,0xFC,0xF1,0x7A,0xF4,0x10,0x27,0x04,0x02,0x81,0x3D,0x00,0x02,0x81,0x39,0x81,0x3F,0x7E,0xFC,0x1E,0xE2,0x04,0x02,0x20,0xB0,0x47,0x8F,0x20,0x30,0x87,0x40,0xC7,0x8F,0x1F,0x40,0x9C,0x40,0x20,0xF0,0xF6,0xE8,0xD1,0x43,0xE6,0x10,0x08,0x04,0xF1,0x03,0x08,0x04,0x08,0x04,0xFE,0xF8,0x3D,0x7A,0x88,0x13,0x02,0x81,0xC0,0x1E,0x00,0x81,0xC0,0x1C,0xC0,0x1F,0x3F,0x7E,0x0F,0x71,0x02,0x81,0x10,0xD8,0xA3,0x47,0x10,0x98,0x43,0x20,0xE3,0xC7,0x0F,0x20,0x4E,0x20,0x10,0xF8,0x7B,0xF4,0xE8,0x21,0x73,0x08,0x04,0x02,0xF8,0x01,0x04,0x02,0x04,0x02,0x7F,0xFC,0x1E,0x3D,0xC4,0x09,0x81,0x40,0x60,0x8F,0x80,0x40,0x60,0x0E,0xE0,0x8F,0x1F,0x3F,0x87,0x38,0x81,0x40,0x08,0xEC,0xD1,0xA3,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x10,0x08,0xEC,0xEB,0x04,0x04,0xCC,0x21,0xFC,0xFB,0xFB,0x03,0x13,0x27,0x10,0x08,0x08,0xEC,0xEB,0xEB,0x04,0xCC,0x21,0x10,0xFB,0xFB,0x03,0x04,0x27,0x10,0x08,0xFC,0xEC,0xEB,0xEB,0x13,0xCC,0x21,0x10,0x08,0xFB,0x03,0x04,0x04,0x10,0x08,0xFC,0xFB,0xEB,0xEB,0x13,0x27,0x21,0x10,0x08,0xEC,0x03,0x04,0x04,0xCC,0x08,0xFC,0xFB,0xFB,0xEB,0x13,0x27,0x10,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x13,0xE7,0xFF,0xFE,0x87,0xEF,0xEB,0xEB,0x0F,0x10,0x10,0x30,0x71,0xFE,0xEF,0xEF,0xF8,0xBE,0xBE,0x3E,0x00,0x01,0x01,0x73,0xE7,0xFF,0xFE,0xFE,0xEF,0xEB,0xEB,0x13,0x10,0x10,0x30,0x87,0xFE,0xEF,0xEF,0x0F,0xBE,0xBE,0x3E,0x71,0x01,0x01,0x73,0xF8,0xFF,0xFE,0xFE,0x00,0xEB,0xEB,0x13,0xE7,0x10,0x30,0x87,0xEF,0xEF,0xEF,0x0F,0x10,0xBE,0x3E,0x71,0xFE,0x01,0x73,0xF8,0xBE,0xFE,0xFE,0x00,0x01,0xEB,0x13,0xE7,0xFF,0x30,0x87,0xEF,0xEB,0xEF,0x0F,0x10,0x10,0x3E,0x71,0xFE,0xEF,0x73,0xF8,0xBE,0xBE,0xFE,0x00,0x01,0x01,0x50,0xE4,0xFF,0xFE,0x09,0x0A,0x0A,0x02,0x04,0xF4,0xF5,0xF5,0xFC,0xFD,0xFD,0x01,0xFA,0xFA,0xFA,0x92,0xFB,0xFB,0x03,0x04,0x7D,0x7D,0xAF,0xFF,0x01,0x33,0xFE,0x7D,0xFE,0xFE,0x00,0x01,0x00,0x60,0xF4,0xFF,0x00,0xD6,0x01,0x00,0x00,0x80,0x75,0x00,0x07,0x00,0x60,0x1D,0xD6,0x01,0x00,0x58,0xF0,0x75,0x00,0x00,0x17,0x18,0x18,0x08,0x10,0xFF,0xF7,0xF7,0xFB,0x7D,0x7D,0x7D,0x03,0x04,0x04,0xCC,0xD1,0xFF,0xFB,0xFB,0x07,0x00,0x00,0xA0,0xD6,0x01,0x00,0x58,0xAB,0x75,0x00,0x00,0xA4,0x00,0x01,0x01,0xF7,0xFB,0xFA,0xFA,0x07,0x08,0x08,0x98,0xA3,0xFF,0xF7,0xF7,0xB0,0x0E,0x00,0x40,0x00,0xAC,0x03,0x00,0x00,0x00,0xEB,0x00,0x0E,0x00,0x40,0x3B,0xB7,0x03,0x00,0xD0,0xBE,0xBE,0x3E,0xA9,0x01,0x01,0x73,0xFC,0xFF,0xFE,0xFE,0x00,0x00,0x00,0x34,0xF0,0x3A,0x00,0x00,0xEB,0xB0,0x0E,0x00,0xC0,0x00,0xB4,0x03,0x00,0x00,0x00,0xED,0x00,0xF5,0x49,0x79,0x3B,0x30,0xD7,0xF7,0xF5,0xEF,0x0F,0x10,0x10,0x40,0x03,0xFF,0xEF,0x00,0xB0,0x0E,0x00,0x00,0x00,0xAC,0x03,0x3B,0x00,0x00,0xEB,0xD0,0x0E,0x00,0x40,0x94,0xB7,0x03,0x00,0x7D,0x5F,0x5F,0x9F,0x00,0x01,0x01,0x73,0xF0,0xFF,0xFE,0xFE,0xEB,0x00,0x00,0x34,0xC0,0x3A,0x00,0x00,0x00,0xB0,0x0E,0x00,0x00,0x00,0xB4,0x03,0x3B,0x00,0x00,0xED,0xF5,0xF5,0x49,0x79,0x10,0x30,0xD7,0xF7,0xEF,0xEF,0x0F,0x10,0x00,0x40,0x03,0xFF,0x03,0x00,0xB0,0x0E,0xEB,0x00,0x00,0xAC,0x40,0x3B,0x00,0x00,0x00,0xD0,0x0E,0x00,0x9F,0x94,0xB7,0x03,0x73,0x7D,0x5F,0x5F,0xFE,0x00,0x01,0x01,0x34,0xF0,0xFF,0xFE,0x00,0xEB,0x00,0x00,0x00,0xC0,0x3A,0x00,0x03,0x00,0xB0,0x0E,0xED,0x00,0x00,0xB4,0x79,0x3B,0x00,0x00,0xF7,0xF5,0xF5,0x49,0x10,0x10,0x30,0xD7,0xFF,0xEF,0xEF,0x0F,0x0E,0x00,0x40,0x03,0xAC,0x03,0x00,0xB0,0x00,0xEB,0x00,0x00,0x00,0x40,0x3B,0x00,0x03,0x00,0xD0,0x0E,0x5F,0x9F,0x94,0xB7,0x01,0x73,0x7D,0x5F,0xFE,0xFE,0x00,0x01,0x00,0x34,0xF0,0xFF,0x00,0x00,0xEB,0x00,0x0E,0x00,0xC0,0x3A,0xB4,0x03,0x00,0xB0,0x00,0xED,0x00,0x00,0x49,0x79,0x3B,0x00,0xD7,0xF7,0xF5,0xF5,0x0F,0x10,0x10,0x30,0x03,0xFF,0xEF,0xEF,0xB0,0x0E,0x00,0x40,0x00,0xAC,0x03,0x00,0x00,0x00,0xEB,0x00,0x0E,0x00,0x40,0x3B,0xB7,0x03,0x00,0xD0,0x5F,0x5F,0x9F,0x94,0x01,0x01,0x73,0x7D,0xFF,0xFE,0xFE,0x00,0x49,0x00,0x30,0xF0,0x7D,0x80,0x80,0x80,0x00,0x00,0x7D,0x7D,0x00,0x40,0x3B,0x00,0x03,0x00,0xD0,0x0E,0xBE,0xBE,0xA8,0xB7,0x02,0xE6,0xFD,0xBE,0xFD,0xFD,0x01,0x02,0x08,0xA0,0xE8,0xFF,0xD7,0x27,0x28,0x28,0x03,0x01,0xDE,0xD7,0xFA,0xFA,0x02,0x03,0x75,0x00,0x00,0xFA,0x60,0x1D,0x00,0x80,0x10,0x58,0x07,0x00,0xFE,0xEF,0xEF,0x0F,0xF7,0xF5,0xF5,0xBD,0x04,0x04,0xCC,0xF8,0xFF,0xFB,0xFB,0x03,0xAF,0xAF,0x4F,0xDC,0x80,0x80,0xB9,0xBE,0x7F,0x7F,0x7F,0x80,0xFA,0xFA,0xC4,0xF8,0x04,0xCC,0xE1,0xFB,0xFB,0xFB,0x03,0x04,0xAF,0x4F,0x9C,0xFF,0xC0,0x1C,0xBE,0xAF,0xBF,0x3F,0x40,0x40,0xFA,0xC4,0xF9,0xBF,0xCC,0xE1,0xFB,0xFA,0xFB,0x03,0x04,0x04,0x4F,0x9C,0xFF,0xFB,0x1C,0xBE,0xAF,0xAF,0x3F,0x40,0x40,0xC0,0xC4,0xF9,0xBF,0xBF,0xE1,0xFB,0xFA,0xFA,0x03,0x04,0x04,0xCC,0x9C,0xFF,0xFB,0xFB,0xBE,0xAF,0xAF,0x4F,0x40,0x40,0xC0,0x1C,0xF9,0xBF,0xBF,0x3F,0xFB,0xFA,0xFA,0xC4,0x04,0x04,0xCC,0xE1,0xFF,0xFB,0xFB,0x03,0xAF,0xAF,0x4F,0x9C,0x40,0xC0,0x1C,0xBE,0xBF,0xBF,0x3F,0x40,0xFA,0xFA,0xC4,0xF9,0x04,0xCC,0xE1,0xFB,0xEB,0xEB,0x03,0x04,0xD6,0x01,0x00,0xE8,0x80,0x75,0x00,0x00,0x1D,0x78,0x1D,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x08,0x08,0x08,0x08,0x09,0x08,0x08,0x08,0x80,0x80,0x80,0x1D,0x80,0x80,0x80,0x80,0xD8,0x91,0x80,0x80,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x80,0x80,0x1D,0x09,0x80,0x80,0x80,0x80,0x91,0x80,0x80,0x80,0x08,0x08,0x08,0xD8,0x08,0x08,0x08,0x08,0x80,0x1D,0x09,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0x08,0xD8,0x91,0x08,0x08,0x08,0x08,0x1D,0x09,0x08,0x08,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x08,0xD8,0x91,0x80,0x20,0x10,0x08,0x08,0x47,0x02,0x81,0x40,0x02,0x81,0x40,0x60,0x20,0x10,0x08,0x04,0x10,0x08,0xEC,0x48,0x02,0x81,0x40,0x20,0x81,0x1D,0x09,0x04,0x10,0x08,0x04,0x02,0x23,0x81,0x40,0x20,0x81,0x40,0x20,0xB0,0x10,0x08,0x04,0x02,0x08,0x04,0x76,0x24,0x81,0x40,0x20,0x10,0xC0,0x8E,0x04,0x02,0x08,0x04,0x02,0x81,0x91,0x40,0x20,0x10,0x40,0x20,0x10,0xD8,0x08,0x04,0x02,0x81,0x04,0x02,0x3B,0x12,0x40,0x20,0x10,0x08,0x60,0x47,0x02,0x81,0x04,0x02,0x81,0x40,0x48,0x20,0x10,0x08,0x20,0x10,0x08,0xEC,0x04,0x02,0x81,0x40,0x02,0x81,0x1D,0x09,0x20,0x10,0x08,0x04,0xB0,0x23,0x81,0x40,0x02,0x81,0x40,0x20,0x24,0x10,0x08,0x04,0x10,0x08,0x04,0x76,0x02,0x81,0x40,0x20,0x81,0xC0,0x8E,0x04,0x10,0x08,0x04,0x02,0xD8,0x91,0x40,0x20,0x81,0x40,0x20,0x10,0x12,0x08,0x04,0x02,0x08,0x04,0x02,0x3B,0x81,0x40,0x20,0x10,0x40,0x60,0x47,0x02,0x08,0x04,0x02,0x81,0xEC,0x48,0x20,0x10,0x40,0x20,0x10,0x08,0x09,0x04,0x02,0x81,0x04,0x02,0x81,0x1D,0x40,0x20,0x10,0x08,0x20,0xB0,0x23,0x81,0x04,0x02,0x81,0x40,0x76,0x24,0x10,0x08,0x20,0x10,0x08,0x04,0x04,0x02,0x81,0x40,0x02,0x81,0xC0,0x8E,0x20,0x10,0x08,0x04,0x10,0xD8,0x91,0x40,0x02,0x81,0x40,0x20,0x3B,0x12,0x08,0x04,0x10,0x08,0x04,0x02,0x02,0x81,0x40,0x20,0x81,0x40,0x60,0x47,0x10,0x08,0x04,0x02,0x08,0xEC,0x48,0x20,0x81,0x40,0x20,0x10,0x1D,0x09,0x04,0x02,0x08,0x04,0x02,0x81,0x81,0x40,0x20,0x10,0x40,0x20,0xB0,0x23,0x08,0x04,0x02,0x81,0x04,0x76,0x24,0x10,0x40,0x20,0x10,0x08,0x8E,0x04,0x02,0x81,0x04,0x02,0x81,0xC0,0x40,0x20,0x10,0x08,0x20,0x10,0xD8,0x91,0x04,0x02,0x81,0x40,0x02,0x3B,0x12,0x08,0x20,0x10,0x08,0x04,0x47,0x02,0x81,0x40,0x02,0x81,0x40,0x60,0x20,0x10,0x08,0x04,0x10,0x08,0xEC,0x48,0x02,0x81,0x40,0x20,0x81,0x1D,0x09,0x04,0x10,0x08,0x04,0x02,0x23,0x81,0x40,0x20,0x81,0x40,0x20,0xB0,0x10,0x08,0x04,0x02,0x08,0x04,0x76,0x24,0x81,0x40,0x20,0x10,0xC0,0x8E,0x04,0x02,0x08,0x04,0x02,0x81,0x91,0x40,0x20,0x10,0x40,0x20,0x10,0xD8,0x08,0x04,0x02,0x81,0x04,0x02,0x3B,0x12,0x40,0x20,0x10,0x08,0x60,0x47,0x02,0x81,0x04,0x02,0x81,0x40,0x48,0x20,0x10,0x08,0x20,0x10,0x08,0xEC,0x04,0x02,0x81,0x40,0x02,0x81,0x1D,0x09,0x20,0x10,0x08,0x04,0xB0,0x23,0x81,0x40,0x02,0x81,0x40,0x20,0x24,0x10,0x08,0x04,0x10,0x08,0x04,0x76,0x02,0x81,0x40,0x20,0x81,0xC0,0x8E,0x04,0x10,0x08,0x04,0x02,0xD8,0x91,0x40,0x20,0x81,0x40,0x20,0x10,0x12,0x08,0x04,0x02,0x08,0x04,0x02,0x3B,0x81,0x40,0x20,0x10,0x40,0x60,0x47,0x02,0x08,0x04,0x02,0x81,0xEC,0x48,0x20,0x10,0x40,0x20,0x10,0x08,0x09,0x04,0x02,0x81,0x04,0x02,0x81,0x1D,0x40,0x20,0x10,0x08,0x20,0xB0,0x23,0x81,0x04,0x02,0x81,0x40,0x76,0x24,0x10,0x08,0x20,0x10,0x08,0x04,0x04,0x02,0x81,0x40,0x02,0x81,0xC0,0x8E,0x20,0x10,0x08,0x04,0x10,0xD8,0x91,0x40,0x02,0x81,0x40,0x20,0x3B,0x12,0x08,0x04,0x10,0x08,0x04,0x02,0x02,0x81,0x40,0x20,0x81,0x40,0x60,0x47,0x10,0x08,0x04,0x02,0x08,0xEC,0x48,0x20,0x81,0x40,0x20,0x10,0x1D,0x09,0x04,0x02,0x08,0x04,0x02,0x81,0x81,0x40,0x20,0x10,0x40,0x20,0xB0,0x23,0x08,0x04,0x02,0x81,0x04,0x76,0x24,0x10,0x40,0x20,0x10,0x08,0x8E,0x04,0x02,0x81,0x04,0x02,0x81,0xC0,0x40,0x20,0x10,0x08,0x20,0x10,0xD8,0x91,0x04,0x02,0x81,0x40,0x02,0x3B,0x12,0x08,0x20,0x10,0x08,0x04,0x47,0x02,0x81,0x40,0x02,0x81,0x40,0x60,0x20,0x10,0x08,0x04,0x10,0x08,0xEC,0x48,0x02,0x81,0x40,0x20,0x81,0x1D,0x09,0x04,0x10,0x08,0x04,0x02,0x23,0x81,0x40,0x20,0x81,0x40,0x20,0xB0,0x10,0x08,0x04,0x02,0x08,0x04,0x76,0x24,0x81,0x40,0x20,0x10,0xC0,0x8E,0x04,0x02,0x08,0x04,0x02,0x81,0x91,0x40,0x20,0x10,0x40,0x20,0x10,0xD8,0x08,0x04,0x02,0x81,0x04,0x02,0x3B,0x12,0x40,0x20,0x10,0x08,0x60,0x47,0x02,0x81,0x04,0x02,0x81,0x40,0x48,0x20,0x10,0x08,0x20,0x10,0x08,0xEC,0x04,0x02,0x81,0x40,0x02,0x81,0x1D,0x09,0x20,0x10,0x08,0x04,0xB0,0x23,0x81,0x40,0x02,0x81,0x40,0x20,0x24,0x10,0x08,0x04,0x10,0x08,0x04,0x76,0x02,0x81,0x40,0x20,0x81,0xC0,0x8E,0x04,0x10,0x08,0x04,0x02,0xD8,0x91,0x40,0x20,0x81,0x40,0x20,0x10,0x12,0x08,0x04,0x02,0x08,0x04,0x02,0x3B,0x81,0x40,0x20,0x10,0x40,0x60,0x47,0x02,0x08,0x04,0x02,0x81,0xEC,0x48,0x20,0x10,0x40,0x20,0x10,0x08,0x09,0x04,0x02,0x81,0x04,0x02,0x81,0x1D,0x40,0x20,0x10,0x08,0x20,0xB0,0x23,0x81,0x04,0x02,0x81,0x40,0x76,0x24,0x10,0x08,0x20,0x10,0x08,0x04,0x04,0x02,0x81,0x40,0x02,0x81,0xC0,0x8E,0x20,0x10,0x08,0x04,0x10,0xD8,0x91,0x40,0x02,0x81,0x40,0x20,0x3B,0x12,0x08,0x04,0x10,0x08,0x04,0x02,0x02,0x81,0x40,0x20,0x81,0x40,0x60,0x47,0x10,0x08,0x04,0x02,0x08,0xEC,0x48,0x20,0x81,0x40,0x20,0x10,0x1D,0x09,0x04,0x02,0x08,0x04,0x02,0x81,0x81,0x40,0x20,0x10,0x40,0x20,0xB0,0x23,0x08,0x04,0x02,0x81,0x04,0x76,0x24,0x10,0x40,0x20,0x10,0x08,0x8E,0x04,0x02,0x81,0x04,0x02,0x81,0xC0,0x40,0x20,0x10,0x08,0x20,0x10,0xD8,0x91,0x04,0x02,0x81,0x40,0x02,0x3B,0x12,0x08,0x20,0x10,0x08,0x04,0x47,0x02,0x81,0x40,0x02,0x81,0x40,0x60,0x20,0x10,0x08,0x04,0x10,0x08,0xEC,0x48,0x02,0x81,0x40,0x20,0x81,0x1D,0x09,0x04,0x10,0x08,0x04,0x02,0x23,0x81,0x40,0x20,0x81,0x40,0x20,0xB0,0x10,0x08,0x04,0x02,0x08,0x04,0x76,0x24,0x81,0x40,0x20,0x10,0xC0,0x8E,0x04,0x02,0x08,0x04,0x02,0x81,0x91,0x40,0x20,0x10,0x40,0x20,0x10,0xD8,0x08,0x04,0x02,0x81,0x04,0x02,0x3B,0x12,0x40,0x20,0x10,0x08,0x60,0x47,0x02,0x81,0x04,0x02,0x81,0x40,0x48,0x20,0x10,0x08,0x20,0x10,0x08,0xEC,0x04,0x02,0x81,0x40,0x02,0x81,0x1D,0x09,0x20,0x10,0x08,0x04,0xB0,0x23,0x81,0x40,0x02,0x81,0x40,0x20,0x24,0x10,0x08,0x04,0x10,0x08,0x04,0x76,0x02,0x81,0x40,0x20,0x81,0xC0,0x8E,0x04,0x10,0x08,0x04,0x02,0xD8,0x91,0x40,0x20,0x81,0x40,0x20,0x10,0x12,0x08,0x04,0x02,0x08,0x04,0x02,0x3B,0x81,0x40,0x20,0x10,0x40,0x60,0x47,0x02,0x08,0x04,0x02,0x81,0xEC,0x48,0x20,0x10,0x40,0x20,0x10,0x08,0x09,0x04,0x02,0x81,0x04,0x02,0x81,0x1D,0x40,0x20,0x10,0x08,0x20,0xB0,0x23,0x81,0x04,0x02,0x81,0x40,0x76,0x24,0x10,0x08,0x20,0x10,0x08,0x04,0x04,0x02,0x81,0x40,0x02,0x81,0xC0,0x8E,0x20,0x10,0x08,0x04,0x10,0xD8,0x91,0x40,0x02,0x81,0x40,0x20,0x3B,0x12,0x08,0x04,0x10,0x08,0x04,0x02,0x02,0x81,0x40,0x20,0x81,0x40,0x60,0x47,0x10,0x08,0x04,0x02,0x08,0xEC,0x48,0x20,0x81,0x40,0x20,0x10,0x1D,0x09,0x04,0x02,0x08,0x04,0x02,0x81,0x81,0x40,0x20,0x10,0x40,0x20,0xB0,0x23,0x08,0x04,0x02,0x81,0x04,0x76,0x24,0x10,0x40,0x20,0x10,0x08,0x8E,0x04,0x02,0x81,0x04,0x02,0x81,0xC0,0x40,0x20,0x10,0x08,0x20,0x10,0xD8,0x91,0x04,0x02,0x81,0x40,0x02,0x3B,0x12,0x08,0x20,0x10,0x08,0x04,0x47,0x02,0x81,0x40,0x02,0x81,0x40,0x60,0x20,0x10,0x08,0x04,0x10,0x08,0xEC,0x48,0x02,0x81,0x40,0x20,0x81,0x1D,0x09,0x04,0x10,0x08,0x04,0x02,0x23,0x81,0x40,0x20,0x81,0x40,0x20,0xB0,0x10,0x08,0x04,0x02,0x08,0x04,0x76,0x24,0x81,0x40,0x20,0x10,0xC0,0x8E,0x04,0x02,0x08,0x04,0x02,0x81,0x91,0x40,0x20,0x10,0x40,0x20,0x10,0xD8,0x08,0x04,0x02,0x81,0x04,0x02,0x3B,0x12,0x40,0x20,0x10,0x08,0x60,0x47,0x02,0x81,0x04,0x02,0x81,0x40,0x48,0x20,0x10,0x08,0x20,0x10,0x08,0xEC,0x04,0x02,0x81,0x40,0x02,0x81,0x1D,0x09,0x20,0x10,0x08,0x04,0xB0,0x23,0x81,0x40,0x02,0x81,0x40,0x20,0x24,0x10,0x08,0x04,0x10,0x08,0x04,0x76,0x02,0x81,0x40,0x20,0x81,0xC0,0x8E,0x04,0x10,0x08,0x04,0x02,0xD8,0x91,0x40,0x20,0x81,0x40,0x20,0x10,0x12,0x08,0x04,0x02,0x08,0x04,0x02,0x3B,0x81,0x40,0x20,0x10,0x40,0x60,0x47,0x02,0x08,0x04,0x02,0x81,0xEC,0x48,0x20,0x10,0x40,0x20,0x10,0x08,0x09,0x04,0x02,0x81,0x04,0x02,0x81,0x1D,0x40,0x20,0x10,0x08,0x20,0xB0,0x23,0x81,0x04,0x02,0x81,0x40,0x76,0x24,0x10,0x08,0x20,0x10,0x08,0x04,0x04,0x02,0x81,0x40,0x02,0x81,0xC0,0x8E,0x20,0x10,0x08,0x04,0x10,0xD8,0x91,0x40,0x02,0x81,0x40,0x20,0x3B,0x12,0x08,0x04,0x10,0x08,0x04,0x02,0x02,0x81,0x40,0x20,0x81,0x40,0x60,0x47,0x10,0x08,0x04,0x02,0x08,0xEC,0x48,0x20,0x81,0x40,0x20,0x10,0x1D,0x09,0x04,0x02,0x08,0x04,0x02,0x81,0x81,0x40,0x20,0x10,0x40,0x20,0xB0,0x23,0x08,0x04,0x02,0x81,0x04,0x76,0x24,0x10,0x40,0x20,0x10,0x08,0x8E,0x04,0x02,0x81,0x04,0x02,0x81,0xC0,0x40,0x20,0x10,0x08,0x20,0x10,0xD8,0x91,0x04,0x02,0x81,0x40,0x02,0x3B,0x12,0x08,0x20,0x10,0x08,0x04,0x47,0x02,0x81,0x40,0x02,0x81,0x40,0x60,0x20,0x10,0x08,0x04,0x10,0x08,0xEC,0x48,0x02,0x81,0x40,0x20,0x81,0x1D,0x09,0x04,0x10,0x08,0x04,0x02,0x23,0x81,0x40,0x20,0x81,0x40,0x20,0xB0,0x10,0x08,0x04,0x02,0x08,0x04,0x76,0x24,0x81,0x40,0x20,0x10,0xC0,0x8E,0x04,0x02,0x08,0x04,0x02,0x81,0x91,0x40,0x20,0x10,0x40,0x20,0x10,0xD8,0x08,0x04,0x02,0x81,0x04,0x02,0x3B,0x12,0x40,0x20,0x10,0x08,0x60,0x47,0x02,0x81,0x04,0x02,0x81,0x40,0x48,0x20,0x10,0x08,0x20,0x10,0x08,0xEC,0x04,0x02,0x81,0x40,0x02,0x81,0x1D,0x09,0x20,0x10,0x08,0x04,0xB0,0x23,0x81,0x40,0x02,0x81,0x40,0x20,0x24,0x10,0x08,0x04,0xBF,0x23,0xFF,0x77,0xC8,0xFF,0x1D,0xF9,0x7F,0x47,0xFE,0xEF,0x91,0xFF,0x3B,0xF2,0xFF,0x8E,0xFC,0xDF,0x23,0xFF,0x77,0xE4,0xFF,0x1D,0xF9,0xBF,0x47,0xFE,0xEF,0xC8,0xFF,0x3B,0xF2,0x7F,0x8E,0xFC,0xDF,0x91,0xFF,0x77,0xE4,0xFF,0x1D,0xF9,0xBF,0x23,0xFE,0xEF,0xC8,0xFF,0x3B,0xF2,0x7F,0x47,0xFC,0xDF,0x91,0xFF,0x77,0xE4,0xFF,0x8E,0xF9,0xBF,0x23,0xFF,0xEF,0xC8,0xFF,0x1D,0xF2,0x7F,0x47,0xFE,0xDF,0x91,0xFF,0x3B,0xE4,0xFF,0x8E,0xFC,0xBF,0x23,0xFF,0x77,0xC8,0xFF,0x1D,0xF9,0x7F,0x47,0xFE,0xEF,0x91,0xFF,0x3B,0xF2,0xFF,0x8E,0xFC,0xDF,0x23,0xFF,0x77,0xE4,0xFF,0x1D,0xF9,0xBF,0x47,0xFE,0xEF,0xC8,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00};
    static uint8_t buf[1024 * 1024];
    uint8_t *p;
    uint8_t *buf2;
    FILE *fp;
    int i;
    int rc;
    int len;
    QuicImageType type;
    int width;
    int height;

    q = simple_quic_init();
    if (q)
    {
        for (i = 1; i < argc; i++)
        {
            if (strcmp(argv[i], "membuf1") == 0)
            {
                p = membuf1; len = sizeof(membuf1);
            }
            else if (strcmp(argv[i], "membuf2") == 0)
            {
                p = membuf2; len = sizeof(membuf2);
            }
            else if (strcmp(argv[i], "timecheck") == 0)
            {
                int j, count;
                if (i == (argc -1))
                {
                    fprintf(stderr, "Error: give the number of times to run the loop\n");
                    exit(1);
                }
                count = atoi(argv[++i]);
                printf("Starting %d loops at %ld\n", count, clock());
                for (j = 0; j < count; j++)
                    one_timeloop(membuf2, sizeof(membuf2));
                printf("finished %d loops at %ld\n", count, clock());
                continue;
            }

            else
            {
                fp = fopen(argv[i], "rb");
                if (fp)
                {
                    len = fread(buf, 1, sizeof(buf), fp);
                    printf("%s: read %d bytes\n", argv[i], len);
                    p = buf;
                    if (len >= sizeof(buf) - sizeof(uint32_t))
                    {
                        fprintf(stderr, "Whoa!  file [%s] too big...\n", argv[i]);
                        exit(1);
                    }
                    if (len == 0)
                    {
                        fprintf(stderr, "Whoa!  nothing in file [%s]\n", argv[i]);
                        exit(1);
                    }
                    fclose(fp);
                }
                else
                {
                        fprintf(stderr, "Whoa!  couldn't open file [%s]\n", argv[i]);
                        exit(1);
                }
            }

            rc = simple_quic_decode(q, p, len, &type, &width, &height, &buf2);
            if (rc == 0)
            {
                int j;
                printf("%s: type %d, width %d, height %d\n", argv[i], type, width, height);
                for (j = 0; j < height; j++)
                {
                    print_a_line(buf2 + (j * width * 4), width);
                }
            }
        }

        simple_quic_term(q);
    }

    quic_decode_js(membuf2, sizeof(membuf2));

    return 0;
}

