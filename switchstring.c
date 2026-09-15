#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	int choice;
	printf("enter the first string");
	gets(str1);
		printf("enter the second string");
	gets(str2);
		printf("1. find length\n:");
		printf("2. copy\n:");
		printf("3. concate\n:");
		printf("4. compare\n:");
		printf("enter your choice");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("lenth of the string=%d",strlen(str1));
			break;
		case 2:
			strcpy(str1,str2);
			printf("copy of the string=%s",str2);
			break;
		case 3:
			strcat(str1,str2);
			printf("concatination of the string=%s",str1);
			break;
		case 4:
			if(strcmp(str1,str2)==0)
			printf("equal");
			else
			printf("not equal");
			break;
			default:
				printf("invalid");
		}
			
	}
	

