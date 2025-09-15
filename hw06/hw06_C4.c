/*
 * hw06_C4.c
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

int f(int x)
{
	int res = 0;
    if ((x >= -2) && (x < 2))
        res = x * x;
    if (x >= 2)
        res = x*x+4*x+5;
    if (x < -2)
        res = 4;
    return res;
}

int main(void)
{
int a=1, b, max = 0;
    while (a != 0)
    {
        scanf("%d", &a);
        b = f(a);
        if (b > max)
            max = b;
    }
    printf("%d ", max);
    return 0;
}
