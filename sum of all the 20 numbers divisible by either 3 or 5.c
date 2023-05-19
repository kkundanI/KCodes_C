//sum of all the 20 numbers which are divisible by either 3 or 5
#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,s=0,a[5];
	 clrscr();
	 printf("enter any 5 numbers\n");
	 for(i=0;i<5;i++)
	   	scanf("%d",&a[i]);
	  for(i=0;i<5;i++)
	  {
	   if((a[i]%3==0)||(a[i]%5==0))
	    {
	    	s=s+a[i];
	    }
	   }
 printf("sum of numbers divigible either by 3 or 5 amongst array = %d",s);
 getch();
}	   
	  
	  
	   