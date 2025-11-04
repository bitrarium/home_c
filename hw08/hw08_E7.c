/*
 * hw08_E07.c
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
	enum {SIZE = 10};
	int arr[SIZE]={0};
	for(int i=0; i<SIZE; i++) scanf("%d", &arr[i]);
	
	for (int i=0, j=SIZE/2-1, k=SIZE-1; i<j; i++, j--, k--)
		{
			int tmp1 = arr[i];
			int tmp2 = arr[i+SIZE/2];
			arr[i] = arr[j];
			arr[i+SIZE/2] = arr[k];
			arr[j] = tmp1;
			arr[k] = tmp2;		
		}
		
	for (int i=0; i<SIZE; i++) printf("%d ",arr[i]);
	return 0;
}

