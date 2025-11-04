/*
 * hw08_E17.c
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

int input(int *arr, int len)
{
    int i;
    for(i=0; i<len; i++) scanf("%d", &arr[i]);
    return i;
}

void print(int *arr, int len)
{
    int i;
    for (i=0; i<len; i++) printf("%d ", arr[i]);
    printf("\n");
}

/******************************************************/

int main() 
{
	enum {SIZE = 10};  
	int in[SIZE]={0};

    input(in, SIZE);
	
	for (int i = 0; i < 10; i++) 
		{
			int count = 0;
			for (int j = 0; j < 10; j++) 
				{
					if (in[i] == in[j]) count++;
				}
			if (count == 1) printf("%d ", in[i]);
		}
    return 0;
}


