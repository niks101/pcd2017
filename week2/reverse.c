/*
 * reverse.c
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


#include<stdio.h>
int reverse(int n)
{
     int rem,new=0;
     while(n> 0)
{
     rem=n%10;
     new= (new*10)+rem;
     n=n/10;
     
};
return new ;
}
int main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    x=reverse(n);
    printf("the reverse of the number is %d \n",x);
    return 0;

}


