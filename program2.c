// PROGRAM TO FIND THE SMALLEST OF THREE NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	 printf("enter the 3 numbers");
	 scanf("%d%d%d",&a,&b,&c);
	 if(a<b&&a<c)
	  printf("%d is the smallest",a);
	 else if(b<a&&b<c)
	  printf("%d is the smallest",b);
	 else
	  printf("%d is the smallest",c);
	 
}
