/*
 * leaaaap.c
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
int leap(int yr)
{
	if(yr % 400 == 0)
	{
		return 0;
	}
	else if(yr % 100 == 0)
	{
		return -1;
	}
	else if(yr % 4 == 0)
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}
int main()
{
	int yr, x;
	printf("enter year");
	scanf("%d", &yr);
	x = leap(yr);
	if(x == 0)
	{
		printf(" %d is a leap year", yr);
	}
	else 
	if(x == -1)
	{
		printf("%d is not a leap year", yr);
	}
	return 2;
}
