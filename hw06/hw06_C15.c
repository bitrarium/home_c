/*
 * hw06_C15.c
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
int grow_up(int n)
{
	if (n<0) n=-n;
	if (n < 10) return 1;
	int last_digit=n%10;
	n/=10;
	while(n)
		{
			int current_digit=n%10;
			if (current_digit >= last_digit) return 0; 
            last_digit = current_digit;
			n/=10;
		}
	return 1;
}

int main(void)
{
	int n;
    scanf("%d", &n);
    grow_up(n) ? printf("YES") : printf("NO");
    return 0;
}

 


