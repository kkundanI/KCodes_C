//largest and smallest no. of array elements
#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,s,l,a[5];
	 clrscr();
	 printf("enter any 5 numbers\n");
	 for(i=0;i<5;i++)
	  	 	scanf("%d",&a[i]);
		l=a[0];
    	s=a[0];
	  for(i=0;i<5;i++)
	  {
	     if(a[i]>l)
	      l=a[i];
	     if(a[i]<s)
	      s=a[i];
	  }
 printf("smallest number = %d",s);
 printf("largest number = %d",l);
 getch();
}	   
	  
	  
	   