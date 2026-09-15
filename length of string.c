#include<stdio.h>
#include<conio.h>
int length(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[50];
    int l;

    printf("Enter a string: ");
    scanf("%s", str);

    l = length(str);

    printf("Length of string = %d", l);

    return 0;
}
