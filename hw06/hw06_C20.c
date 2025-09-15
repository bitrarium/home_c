/*
 * hw06_C20.c
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

int main()
{

    char c;
  
    //printf("%d\n",Number);
    int c_40=0,c_41=0, flag = 0, i=0;
    while( (c=getchar())!='.') //спец символ новой строки
		{
			//printf("%d\n",c);
			
			if (c==')' && flag==0)
				{
					flag = 1;
					//printf("flag=%d\n",flag);
					i=1;
			}
			
			if(c=='(') c_40++;
			if (c==')') c_41++;
			//printf("c_40=%d\n",c_40);
			//printf("c_41=%d\n",c_41);
			flag = 1;
		}
	//printf("flag=%d\n",flag);
	if ((c_40 == c_41) && (i == 0)) printf("YES");
	else  printf("NO");
    return 0;
}





 


