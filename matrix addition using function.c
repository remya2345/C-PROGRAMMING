#include<stdio.h>
#include<conio.h>

	void read (int matrix[10][10],int r,int c)
	{
	int i, j;
	for( i=0;i<r;i++)
	{
		for( j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
}
	
		void add(int matrix1[10][10],int matrix2[10][10],int result[10][10],int r,int c)
		{
		int i, j;
	for( i=0;i<r;i++)
	{
		for( j=0;j<c;j++)
		{
			result[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
}
	
	void display(int result[10][10],int r,int c)
	{
	int i, j;
	for( i=0;i<r;i++)
	{
		for( j=0;j<c;j++)
		{
		printf("%d ",result[i][j]);
		}
		printf("\n");
	}
}
	
	int main()
	{
	  int matrix1[10][10],matrix2[10][10],result[10][10];
	  int r,c;
		printf("enter the row and column");
		scanf("%d%d",&r,&c);
		printf("enter the elements in matrix1 \n");
		read(matrix1,r,c);
		printf("enter the elements in matrix2 \n");
		read(matrix2,r,c);
		add(matrix1,matrix2,result,r,c);
		printf("result \n");
		display(result,r,c);
	
		}	
		
		
		
	
	

