/*
 *  $Id: group.h,v 5.18 2001-07-30 01:57:42-07 bryan Exp $
 *
 *  Copyright conserver.com, 2000-2001
 *
 *  Maintainer/Enhancer: Bryan Stansell (bryan@conserver.com)
 *
 *  Copyright GNAC, Inc., 1998
 */

/*
 * Copyright 1992 Purdue Research Foundation, West Lafayette, Indiana
 * 47907.  All rights reserved.
 *
 * Written by Kevin S Braunsdorf, ksb@cc.purdue.edu, purdue!ksb
 *
 * This software is not subject to any license of the American Telephone
 * and Telegraph Company or the Regents of the University of California.
 *
 * Permission is granted to anyone to use this software for any purpose on
 * any computer system, and to alter it and redistribute it freely, subject
 * to the following restrictions:
 *
 * 1. Neither the authors nor Purdue University are responsible for any
 *    consequences of the use of this software.
 *
 * 2. The origin of this software must not be misrepresented, either by
 *    explicit claim or by omission.  Credit to the authors and Purdue
 *    University must appear in documentation and sources.
 *
 * 3. Altered versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 4. This notice may not be removed or altered.
 */

#define MAXPSWDLEN	16	/* max length of encrypted password     */

typedef struct grpent {		/* group info                           */
    unsigned short port;	/* port group listens on                */
    int pid;			/* pid of server for group              */
    int imembers;		/* number of consoles in this group     */
    CONSENT *pCElist;		/* list of consoles in this group       */
    CONSCLIENT *pCLall;		/* all clients to scan after select     */
} GRPENT;


extern void Spawn();
extern int CheckPass();
extern const char *strtime();
extern void tagLogfile();
