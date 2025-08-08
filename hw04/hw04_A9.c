/*
 * hw04_A9.c
 * 
 * Copyright 2025 BITRARIUM <BITRARIUM@DESKTOP-LCIE77B>
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, out_max;
	scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
		out_max =  a > b ?  a : b;
        out_max = out_max > c ? out_max: c;
        out_max = out_max > d ? out_max: d;
        out_max = out_max > e ? out_max: e; 
        printf("%d", out_max); 

	return 0;
}

