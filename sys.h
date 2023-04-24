/* Copyright (c) 1999 Carlo Wood.  All rights reserved.
   Copyright (c) 1993, 1994 Joseph Arceneaux.  All rights reserved.

   This file is subject to the terms of the GNU General Public License as
   published by the Free Software Foundation.  A copy of this license is
   included with this software distribution in the file COPYING.  If you
   do not have a copy, you may obtain a copy by writing to the Free
   Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

   This software is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details. */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef STDC_HEADERS
#include <string.h>
#else
#ifndef HAVE_STRCHR
#define strchr index
#define strrchr rindex
#endif
char *strchr(), *strrchr();
#ifndef HAVE_MEMCPY
#define memcpy(d, s, n) bcopy ((s), (d), (n))
#define memmove(d, s, n) bcopy ((s), (d), (n))
#endif
#endif

#include <stdio.h>

/* Values of special characters. */
#define TAB '\t'
#define EOL '\n'
#define BACKSLASH '\\'
#define NULL_CHAR '\0'

#ifdef DEBUG
extern int debug;
#endif

#ifdef __GNUC__
#define INLINE __inline__
#else
#define INLINE
#endif

#ifdef VMS
# define ONE_DOT_PER_FILENAME 1
# define PROFILE_FORMAT "%s%s"
# define BACKUP_SUFFIX_STR    "_"
# define BACKUP_SUFFIX_CHAR   '_'
# define BACKUP_SUFFIX_FORMAT "%s._%d_"
# define SYS_READ vms_read	/* Defined in io.c */
# ifdef VAXC
#  include <unixio.h>
# endif
#endif /* VMS */

#ifdef __MSDOS__
# define ONE_DOT_PER_FILENAME 1
#endif /* __MSDOS__ */

/* Donated by Carlo Wood from `libr'.  All rights reserved. */
#if !defined(__GNUC__) || (__GNUC__ < 2) || (__GNUC__ == 2 && __GNUC_MINOR__ < 7)
#define __attribute__(x)
#endif
#define RCSTAG_CC(string) static char rcs_ident[] __attribute__ ((unused)) = string;
#define RCSTAG_H(name, string) static const char rcs_ident_##name##_h[] __attribute__ ((unused)) = string;

RCSTAG_H(sys, "$Id: sys.h,v 1.5 1999/06/03 18:00:12 carlo Exp $")

struct file_buffer
{
  char *name;
  unsigned long size;
  char *data;
};

extern struct file_buffer *read_file (), *read_stdin ();
