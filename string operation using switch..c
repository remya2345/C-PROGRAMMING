#include<stdio.h>
#include<conio.h>
void length(char str1[])
{
	int i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	printf("length of the string =%d",i);
}
void copy(char str1[],char str2[])
{
	int i;
	while(str1[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str2[i]!='\0';
	printf("copy of the string =%s",str2);
}
void compare(char str1[],char str2[])
{
	int i;
	while(str1[i]==str2[i]&&str1[i]!='\0')
	{
		i++;
	}
	if(str1[i]=='\0'&&str2[i]=='\0')
	printf("equal");
	else
	printf("not equal");
}
void concatination(char str1[],char str2[])
{
	int i,j;
	while(str1[i]!=0)
	{
		i++;
	}
		while(str1[j]!=0)
	{
		str1[i]=str2[i];
		i++;
		j++;
	}
		str1[i]!='\0';
}
int main()
{
	char str1[50],str2[50];
	int choice;
	printf("enter the first string");
	gets(str1);
	printf("enter the second string");
	gets(str2);
	printf("1.length:\n");
	printf("2.copy:\n");
	printf("3.compare:\n");
	printf("4.concatination:\n");
	printf("enter the your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	        	case 1:
	        		length(str1);
				break;
				case 2:
					copy(str1,str2);
				printf("copy is %s",str2);
				break;
				case 3:
					compare(str1,str2);
				break;
				case 4:
					concatination(str1,str2);
				printf("concatination is %s",str1);
				break;
				case 5:
					default:
					printf("invalid");
	}
	
}

