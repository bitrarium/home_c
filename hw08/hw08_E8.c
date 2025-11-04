/*
 * hw08_E08.c
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
 
void revArr(int * array, int num)
{
    for ( int i = 0, j = num - 1; i < j; i++, j--)
		{
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
}
 
int main()
{
	enum {SIZE = 12};
	int arr[SIZE] = {0};
	
    for(int i=0; i < SIZE; i++) scanf("%d", &arr[i]);
    for(int i=0;i<3;i++) revArr(arr +i*SIZE/3, SIZE/3);
    for (int i=0; i<SIZE; i++) printf("%d ",arr[i]);
    return 0;
} 
