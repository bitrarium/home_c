/*
 * hw06_C11.c
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

int nod(int a, int b)
{
	while (a > 0 && b > 0)
		{
			a > b ? a%=b : (b%=a);
	    }
    if (a==0) return b;
    else return a;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a<0) a=-a;
	if (b<0) b=-b;
	printf("%d", nod(a,b));
    return 0;
}

 


