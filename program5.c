// PROGRAM TO FIND SIMPLE INTREAST
#include<stdio.h>
#include<conio.h>
void main()
{
	float i,p,n,r;
	 printf("enter the principle amount");
	 scanf("%f",&p);
	  printf("enter the number of year");
	 scanf("%f",&n);
	  printf("enter the rate of intrest");
	 scanf("%f",&r);
	 i=(p *n * r)/100;
	 printf("intrest =%f",i);
}
