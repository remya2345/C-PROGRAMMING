//PROGRAM TO FIND THE AREA OF RECTANGLE
#include<stdio.h>
#include<conio.h>
int main()
{
    int l, b, area;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    area = l * b;
    printf("Area = %d", area);
    return 0;
}
