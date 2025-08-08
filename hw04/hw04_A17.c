/*
 * hw04_A17.c
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
	int a;
	scanf ("%d", &a);
	switch (a)
		{
			case 1: printf("winter"); break;
			case 2: printf("winter"); break;
			case 3: printf("spring"); break;
			case 4: printf("spring"); break;
			case 5: printf("spring"); break;
			case 6: printf("summer"); break;
			case 7: printf("summer"); break;
			case 8: printf("summer"); break;
			case 9: printf("autumn"); break;
			case 10: printf("autumn"); break;
			case 11: printf("autumn"); break;
			case 12: printf("winter"); break;
		}
	return 0;
}

