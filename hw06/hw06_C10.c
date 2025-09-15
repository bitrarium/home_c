/*
 * hw06_C10.c
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
#include <stdint.h> 
//#include <locale.h>

void print_simple(int n)
{
	int divider=2;
	while (n!=1)
		{
			if(n%divider==0)
				{
					printf("%d ",divider);
					n/=divider;
				}
			else divider+=1;
		}  
}

int main()
{
	int a;
	scanf("%d", &a);
	if (a<0) a=-a;
	print_simple(a);
    return 0;
}

 


