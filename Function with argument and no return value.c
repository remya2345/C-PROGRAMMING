#include<stdio.h>
#include<conio.h>

void display(int a, int b);

void main()
{
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    display(a, b);

    
}

void display(int a, int b)
{
    int s;

    s = a + b;

    printf("Sum of a and b = %d", s);
}
