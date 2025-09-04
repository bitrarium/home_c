/*
 * hw05_B7.c
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

int main(void)
{
	int a,b,c,d;
	scanf ("%d", &a);
	if (a<0) a=-a;
	//if (a<10) printf("NO");
	while(a)
		{
			b=a%10;
			//printf("1.b=%d\n",b);
			c=a/10;
			//printf("2.c=%d\n",c);
			while(c)
				{
					d=c%10;
					//printf("3.d=%d\n",d);
					if (b==d)
						{
							printf("YES");
							return 0;
						}
						//else printf("if else\n");
					c/=10;
					//printf("4.c=%d\n",c);
				}
			a/=10;
			//printf("5.a=%d\n",a);
		}
	printf("NO");
	return 0; 
}

