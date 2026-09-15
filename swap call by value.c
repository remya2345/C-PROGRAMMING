#include<stdio.h>
#include<conio.h>
void change(int x,int y)
{
	 int temp;
	 temp=x;
	 x=y;
	 y=temp;
}
int main()
{
	int x=10 ,y=20;
	printf("before swap the value x= %d\n y=%d\n",x,y);
   swap(x,y);
	printf("after swap the value x= %d\n y=%d\n",x,y);
	
	
}
