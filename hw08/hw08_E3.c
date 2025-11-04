/*
 * hw08_E03.c
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
int Input (int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) scanf ("%d", &arr[i]);
    return i;
}

int main()
{
	int arr[10]={0};
	int min=0, max=0, i_min=1, i_max=1;
	Input(arr, 10);
	
	min = arr[0];
	for (int i = 0; i < 10 ; i++)
	{
		 if (min > arr[i]) 
			{
				min = arr[i];
				i_min = i+1;
			}
	}
	for (int i = 0; i < 10; i++)
	{
		 if (max < arr[i]) 
			{
				max = arr[i];
				i_max = i+1;
			}
	}
	printf("%d ",i_max);
	printf("%d ",max);
	printf("%d ",i_min);
	printf("%d",min);
	return 0;
}

