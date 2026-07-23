//PROGRAM TO FIND AREA AND PERIMETER OF A RECTANGLE
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,area,peri;
		printf("****rectangle****");
	printf("\n enter the length and bredth");
	 scanf("%d%d",&l,&b);
	 area=l*b;
	  printf(" area= %d ", area);
	   peri=2*(l+b);
	  printf("\n perimeter= %d", peri);
	 
}
