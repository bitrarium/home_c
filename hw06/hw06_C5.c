/*
 * hw06_C5.c
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

int abs(int a)
{
	return a<0 ? -a : a;
}
int f(int a)
{
	int b=0;
	for (int N = 1; N <= a; N++)
	{
		b+=N;
		//printf("b=%d\n",b);
	}
	return b;
}
int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", f(abs(a)));
    return 0;
}
