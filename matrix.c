#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix1[10][10],matrix2[10][10] ;
	int i,j;
	int r,c,r1,c1;
	printf("enter the row and column of the matrix 1:\n ");
	scanf("%d%d",&r,&c);
	printf("enter the elements in the matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d ",&matrix1[i][j]);
		}
}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",matrix1[i][j]);
		}
		printf("\n");
	}
		printf("enter the row and column of the matrix2 \n");
	scanf("%d%d",&r1,&c1);
	printf("enter the elements in the matrix2 \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d ",&matrix2[i][j]);
		}
}
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",matrix2[i][j]);
		}
		printf("\n");
	}
	
}
