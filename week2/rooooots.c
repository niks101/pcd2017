/*
 * rooooots.c
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
#include <math.h>

struct complex
{
	float real;
	float imag;
};

struct roots
{
	struct complex r1,r2;
};

int findroots(float a, float b, float c, struct roots *r)
{
	float d=(b*b)-4*a*c;
	
	if(d==0)
	{
		r->r1.real=r->r2.real = -b/(2*a);
	}
	
	if(d>0)
	{
		r->r1.real=(-b+sqrt(d))/(2*a);
		r->r2.real=(-b-sqrt(d))/(2*a);
		r->r1.imag=r->r2.imag=0;
	}
	if(d<0)
	{
		r->r1.real=r->r2.real=-b/(2*a);
		r->r1.imag=r->r2.imag=sqrt(-d)/(2*a);
	}
	return 0;
}

int main()
{
	struct roots r;
	float p,q,s;
	printf("enter coeff of x^2, x and constant");
    scanf("%f%f%f", &p, &q, &s);
    findroots(p, q, s, &r);
    printf("the roots are %f + i%f and %f - i%f", r.r1.real, r.r1.imag, r.r2.real, r.r2.imag);
    return 1;
}




