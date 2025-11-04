/*
 * hw08_E09.c
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
 
void shiftR(int * array, int num)
{

}
 
int main()
{
	enum {SIZE = 10};
	int arr[SIZE] = {0};
	int tmp;
	
    for(int i=0; i < SIZE; i++) scanf("%d", &arr[i]);
	tmp = arr[SIZE-1];
	 for (int i = SIZE-2; i >= 0; i--) 
		{
			arr[i + 1] = arr[i];
		}
    arr[0] = tmp;
    for (int i=0; i<SIZE; i++) printf("%d ",arr[i]);
    return 0;
} 
