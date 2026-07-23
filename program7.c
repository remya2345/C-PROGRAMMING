//PROGRAM TO PRINT STUNDENT NAME,ROLL NO,AVARAGE OF 3 SUBJECT AND GRADE
#include<stdio.h>
#include<conio.h>
void main()
{       char name[10];
	int roll,m1,m2,m3,avg;
		printf("****student mark list****");
		printf("\n enter the name ");
	 	scanf("%s",&name);
		printf("\n enter the roll number ");
	 	scanf("%d",&roll);
	    printf("\n enter the mark for subject 1:");
	    scanf("%d",&m1);
	    printf("\n enter the mark for subject 2:");
	    scanf("%d",&m2);
	    printf("\n enter the mark for subject 3 :");
	    scanf("%d",&m3);
	    avg=(m1+m2+m3)/3;
	    printf("\n average of three subject is %d \n",avg);
	    
	 
	  if(avg < 50)
	  
	  
	  printf("\nfail");

	   else if(avg>70 && avg<100)
	   
	   
	   
	    printf("\n A+ \npass");

	  else
	  
	  
	  
	  printf("invalid");


   

	 
	
	  
	
	 
}
