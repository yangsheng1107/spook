/*
 * Copyright (C) 2004 Nathan Lutchansky <lutchann@litech.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <config.h>

int access_log_init(void);
void oss_init(void);

#ifdef SPOOK_INPUT_V4L
void v4l_init(void);
#endif

#ifdef SPOOK_INPUT_V4L2
void v4l2_init(void);
#endif

#ifdef SPOOK_INPUT_DC1394
void dc1394_init(void);
#endif

#ifdef SPOOK_INPUT_VDIG
void vdig_init(void);
#endif

#ifdef SPOOK_ENCODER_JPEG
int jpeg_init(void);
#endif

int framedrop_init(void);
int alaw_init(void);

#ifdef SPOOK_ENCODER_MPEG4
int mpeg4_init(void);
int mpeg4_dec_init(void);
#endif

int mp2_init(void);
int live_init(void);
int http_init(void);
int control_listen(void);

