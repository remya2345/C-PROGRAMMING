#include<stdio.h>
#include<conio.h>
void calc(int a[10])
{
	int sum=0;
	int i;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d ",sum);
	printf("avg=%d ",sum/5);
	
}
int main()
{
	  int a[10]={1,2,3,4,5};
	  calc(a);
	  
}
