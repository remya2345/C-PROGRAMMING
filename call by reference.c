#include<stdio.h>
#include<conio.h>
void change(int *x)
{
	*x=10;
}
int main()
{
	int a=20;
	printf("before function call=%d\n",a);
	change(&a);
	printf("after function call=%d\n",a);
	
}

