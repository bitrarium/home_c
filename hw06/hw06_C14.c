/*
 * hw06_C14.c
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

int even_sum(int n)
{
	int sum = 0;
    for(sum = 0; n > 0; n /= 10)
        sum += n % 10;
    return (sum % 2 == 0);
}
 
int main()
{
	int n;
    scanf("%d", &n);
    even_sum(n) ? printf("YES") : printf("NO");
    return 0;
}



 


