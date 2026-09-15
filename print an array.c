#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n;
	printf("enter the length of array");
	scanf("%d",&n);
	printf("enter the elements in  array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" array");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
