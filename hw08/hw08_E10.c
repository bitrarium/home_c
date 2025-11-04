/*
 * hw08_E10.c
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
  
int main()
{
	enum {SIZE = 12};
	enum {ShiftNUM = 4};
	int arr[SIZE] = {0};
    int tmp[ShiftNUM] = {0};
    int *ptrArr = arr; 
    int i, j;
	
    for(int i=0; i < SIZE; i++) scanf("%d", &arr[i]);
    for (i = 0; i < ShiftNUM; i++) 
		{
			tmp[i] = *(ptrArr + (SIZE-ShiftNUM) + i);
		}
     for (i = (SIZE-ShiftNUM)-1; i >= 0; i--) 
		{
			*(ptrArr + 4 + i) = *(ptrArr + i);
		}
	 for (i = 0; i < ShiftNUM; i++) 
		{
			*(ptrArr + i) = tmp[i];
		}
    for (int i=0; i<SIZE; i++) printf("%d ",arr[i]);
    return 0;
} 
