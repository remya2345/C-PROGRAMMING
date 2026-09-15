#include<stdio.h>
#include<string.h>
int copy(char str1[], char str2[])
{
	 strcpy(str2,str1);
}
int main()
{
	char str1[50],str2[50];
	printf("enter the string 1 ");
	gets(str1);
	copy(str1,str2);
	printf("copy of the string is =%s ",str1);
}
