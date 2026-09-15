#include<stdio.h>
#include<conio.h>
int  compare(char str1[],char str2[])
{
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
		i++;
	}
  	while(str1[i]=='\0'&&str2[i]=='\0')
	{
		if(str1[i]=str2[i])
		
			return 1;
			else
			return 0;
		
	}	
	
}

int main() 
{
	char str1[100], str2[100];
	printf("enter the string1");
	gets(str1);
	printf("enter the string2");
	gets(str2);	
   if(compare(str1,str2))
   {
   	    printf("string are equal");
   }
   else
   {
   	    printf("string are not equal");
   }
	
}


