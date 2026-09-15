#include<stdio.h>
#include<conio.h>
void main()
{
	char c='A';
	int i=69;
	float f=99.5;
	double d=273.46523;
	printf("DATA TYPE CONVERSIONS");
	printf("\n--------------------\n");
	
	printf("Original values:\n");
	printf("Character:%c\n",c);
	printf("Integer:%d\n",i);
	printf("Float=%f\n",f);
	printf("Double=%lf\n\n\n");
	
	printf("Type Conversions:\n");
	printf("Character to Integer: c=%d\n",(int)c);
	printf("Character to Float: c=%f\n",(float)c);
	printf("Character to Double: c=%lf\n\n",(double)c);
	printf("Integer to Character: i=%c\n",(char)i);
	printf("Integer to Float: i=%f\n",(float)i);
	printf("Integer to Double: i=%lf\n\n",(double)i);
	printf("Float to Character: f=%c\n",(char)f);
	printf("Float to Integer: f=%d\n",(int)f);
	printf("Float to Double: f=%lf\n\n",(double)f);
	
	
}
