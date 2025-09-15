/*
 * hw06_C19.c
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
 
int f(char c)
{
    if (c >= '0' && c <= '9')
    return c - '0';
    return 0;
}
 
int main()
{
	int sum = 0;
	char input;
    while (1)
    {
        scanf("%c", &input);
        if (input == '.')
            break;
        sum += f(input);
}
    printf("%d", sum);

    return 0;
}



 


