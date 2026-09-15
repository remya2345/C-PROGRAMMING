#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int choice;
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	printf("1.addition \n");
	printf("2.substration \n");
	printf("3.multiplication \n");
printf("enter your choice");
	scanf("%d",&choice);	

 switch(choice)
 {
 
 	case 1:
 	c=a+b;
 	printf("result\n",c);
 	break;
 	case 2:
 	c=a-b;
 	printf("result\n",c);
 	break;
 	case 3:
 	c=a*b;
 	printf("result\n",c);
 	break;
 	case 4:
 		printf("default\n");
 }

}
