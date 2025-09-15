/*
 * hw06_C12.c
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
#include <math.h>
 
float sinus(float x)
{
	double Xn = x; //первое слагаемое ряда Тейлора
	double sum = 0; //сумма ряда Тейлора
	int n = 1; 
	while (fabs(Xn) > 0.001) //условие на точность
	{
		sum = sum + Xn; //сумма в ряде Тейлора
		Xn *= (-1)*(x*x) / ((2*n+1)*(2*n));
		n++;
	}

    return sum;
}
 
int main(void)
{
	double x;
    scanf("%lf", &x);
    x = x * M_PI/180.0; //(x в радианах)
    printf("%.3f",sinus(x));
    return 0;
}


 


