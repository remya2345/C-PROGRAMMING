//PROGRAM TO CONVERT FAHRENHEIT TO CELSIUS
#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	 printf(" Enter The Temp in Fahrenheit");
	 scanf("%d",&f);
	 c=(f-32) / 1.8;
	 printf("celsius= %d",c);
}
