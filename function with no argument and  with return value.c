#include<stdio.h>
#include<conio.h>
int getNumber()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int main()
{
    int number;
    number = getNumber();
    printf("Number = %d", number);
    return 0;
}

