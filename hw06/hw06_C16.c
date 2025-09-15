/*
 * hw06_C16.c
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
//#include <stdint.h> 
//#include <locale.h>
//#include <math.h>
int is_prime(int n)
{
	int i; 
    for (i = 2; i < n; i++)
		{
			if (n%i==0)
				{
					return 0;
				}
		}
    if(n==1)
        return 0;
    else
        return 1;
}

int main(void)
{
	int n;
    scanf("%d", &n);
    if (n==0) printf("NO");
    else is_prime(n) ? printf("YES") : printf("NO");
    return 0;
}

 


