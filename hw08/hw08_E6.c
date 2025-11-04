/*
 * hw08_E06.c
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

#define SIZE 12

int Input (int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    return i;
}
int main()
{
	int arr[SIZE]={0};
	float sum=0;
	
	Input(arr, SIZE);
	
	for (int i = 0; i < SIZE; i++)
	{
		sum+=arr[i];
	}
	
	printf("%.2f\n", sum/SIZE);
	return 0;
}

