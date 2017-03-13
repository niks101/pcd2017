/*
 * sqroot.c
 * 
 * Copyright 2017 B-nikitap <nikitaparikh@cse092-ThinkCentre-Edge72>
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

float root(float num)
{
	float m,n;
	
    n=0.001;
    
    for( m=0; m<num; m=m+n)
 {
	 if((m*m)>num)
	 {
		 m=m-n;
		 break;
		
	 }
 }
	 
	return m;
}
	
int main()
{
	float num, sqroot;
	printf("enter the number to find the root of\n");
	scanf("%f",&num);
	sqroot=root(num);
	printf("%f",sqroot);
    return 1;
}
	
	
		

