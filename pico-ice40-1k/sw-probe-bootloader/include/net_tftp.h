/**
 * eCow-logic - Bootloader
 *
 * Copyright (c) 2015 Saint-Genest Gwenael <gwen@agilack.fr>
 *
 * This file may be distributed and/or modified under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation. (See COPYING.GPL for details.)
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
#ifndef NET_TFTP_H
#define NET_TFTP_H
#include "types.h"

#define TFTP_PORT_DEFAULT 12345

typedef struct _tftp_session
{
  int state;
  u8  server[4];
  int port;
  u32 timestamp;
  u32 lastblock;
  u32 length;
  const char *filename;
  u8  *data;
} tftp;

void tftp_init(tftp *session);
int  tftp_run (tftp *session);
void tftp_ack (tftp *session);
void tftp_stop(tftp *session);

#endif
