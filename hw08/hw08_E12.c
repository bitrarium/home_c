/*
 * hw08_E12.c
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
    //printf("\n");
}

void SwapArr(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSortA(int *arr, int n)
{
    int FlagNoSwap;
    for (int i=0; i<n; i++)
		{
			FlagNoSwap = 1;
			for (int j=n-1; j>i; j--)
				{
					if (arr[j-1]>arr[j])
						{
							SwapArr(arr, j-1, j);
							FlagNoSwap = 0;
						}
				}
			if (FlagNoSwap)	break;
		}
}
void BubbleSortB(int *arr, int n)
{
    int FlagNoSwap;
    for (int i=0; i<n; i++)
		{
			FlagNoSwap = 1;
			for (int j=n-1; j>i; j--)
				{
					if (arr[j-1]<arr[j])
						{
							SwapArr(arr, j-1, j);
							FlagNoSwap = 0;
						}
				}
			if (FlagNoSwap)	break;
		}
}
int main()
{
	enum {SIZE = 10};
	int arr[SIZE] = {0};
	
    Input(arr, SIZE);
    BubbleSortA(arr, SIZE/2);
    BubbleSortB(&arr[SIZE/2], SIZE/2);
    Print(arr, SIZE);
    
    return 0;
} 

