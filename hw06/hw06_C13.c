/*
 * hw06_C13.c
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
 
float cosinus(float x)
{
    double cos_x = 1.0; // Первый член ряда: n=0, x^0 / 0! = 1
    double Xn = 1.0;  // Инициализируем первый член
    int n = 1;          // Начинаем со второго члена (n=1)
    double prec = 0.0001; // Точность вычислений

    
    while (fabs(Xn) > prec) // Цикл while для итераций ряда
    {
        // Вычисление следующего члена ряда:
        // term = (-1)^n * x^(2n) / (2n)!
        Xn*=(-1)*x*x/((2*n)*(2*n-1)); // Обновляем term

        // Добавляем член к результату
        cos_x += Xn;

        // Переходим к следующему члену ряда
        n++;
    }
    return cos_x;
}
 
int main(void)
{
	double x;
    scanf("%lf", &x);
    x = x * M_PI/180.0; //(x в радианах)
    printf("%.3f",cosinus(x));
    return 0;
}


 


