/*
 * hw08_E04.c
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

#define SIZE 10

int Input (int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    return i;
}
int main()
{
	int arr[SIZE]={0};
	int index1=0, index2=1;
	
	Input(arr, SIZE);
	
	for (int i = 1; i < SIZE; i++)
	{
		 if (arr[i] > arr[index1]) 
			{
				index2 = index1;
				//printf("index1=%d\n", index1);
				//printf("index2=%d\n", index2);
				index1 = i;
				//printf("index1=%d\n", index1);
				//printf("****\n");
		}
		else if (arr[i] > arr[index2])
			{
				index2=i;
				//printf("else index2=%d\n", index1);
		}
	}
	printf("%d\n", arr[index1]+arr[index2]);
	return 0;
}

