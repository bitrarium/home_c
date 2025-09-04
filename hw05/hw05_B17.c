/*
 * hw05_B17.c
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
#include <locale.h>

int main(void)
{
	//setlocale(LC_ALL, "ru_RU.UTF-8");
	
	unsigned int a, i, temp, sum=0, prod=1;
	scanf("%d", &a);
	if (a>=10)
		{
			for (i = 10; i <=a; i++)
				{		
					sum = 0;
					prod = 1;
					temp = i;
					//printf("start while i=temp=%d\n",i);
					while (temp > 0) 
						{
							sum=sum+temp%10;
							prod=prod*(temp%10);
							//printf("temp/10=%d\n",temp%10);
							temp/=10;	
						}
					//printf("sum=%d\n", sum);
					//printf("prod=%d\n", prod);	
					if (sum == prod) printf("%d ",i);
				}
		}
	
    return 0;
}


