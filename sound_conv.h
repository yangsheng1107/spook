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

int val_seg(int val);
unsigned char s16_to_alaw(int pcm_val);
int alaw_to_s16(unsigned char a_val);
unsigned char s16_to_ulaw(int pcm_val);	 /* 2's complement (16-bit range) */
int ulaw_to_s16(unsigned char u_val);
void mulaw_dec(char *mulaw_data /* contains 160 char */,
		char *s16_data	  /* contains 320 char */ );

void mulaw_enc(char *s16_data	  /* contains pcm_size char */,
		char *mulaw_data  /* contains pcm_size/2 char */,
		int pcm_size);

void alaw_dec(char *alaw_data	 /* contains 160 char */,
	   char *s16_data	 /* contains 320 char */,
	   int limit );

void alaw_enc(char *s16_data	/* contains 320 char */,
	   char *alaw_data	/* contains 160 char */,
	   int pcm_size);

