//sum of array elements
#include<stdio.h>
#include<conio.h>
void main() 
{
	 int i,a[10],s=0;
	 clrscr();
	 printf("enter any ten numbers \n");
	 for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	  printf("sum of arrray elements =\t");
	  for(i=0;i<10;i++)
	  {
	  		s=s+a[i];
	  	printf("%d\t",s);
	  }
	  
	  printf("\nsum=%d\t",s);
	  getch();
}