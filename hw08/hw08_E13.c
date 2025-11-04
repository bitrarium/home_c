/*
 * hw08_E13.c
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

int Input(int *arr, int len)
{
    int i;
    for(i=0; i<len; i++) scanf("%d", &arr[i]);
    return i;
}

void Print(int *arr, int len)
{
    int i;
    for (i=0; i<len; i++) printf("%d ", arr[i]);
    printf("\n");
}

void SwapArr(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{
	enum {SIZE = 10};
	int arr[SIZE] = {0};
	int arr2[SIZE] = {0};
	int tmp;
	int count=0;
	int j=0;
    Input(arr, SIZE);
     for (int i=0; i<SIZE; i++)
		{
			tmp=arr[i]/10;
			tmp%=10;
			if (tmp==0) 
				{
					arr2[i]=arr[i];
					count++;
				}
			//printf("arr[i]=%d arr2[i]=%d tmp=%d\n",arr[i], arr2[i], tmp);
		}
	//printf("count=%d\n", count);	
    //Print(arr, SIZE);
   // Print(arr2, SIZE);
	if (count<SIZE)
		{
			for (int i=0; i<SIZE; i++) 
				{
					if (arr2[i]!=0) 
						{
							arr[j]=arr2[i];
							j++;
						}
				}
			Print(arr, count);
		}
	else Print(arr2, count);
    return 0;
} 

