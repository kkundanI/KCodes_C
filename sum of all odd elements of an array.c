//sum of all odd array elements
#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,a[10],s=0;
	 clrscr();
	 printf("enter any ten numbers");
	 for(i=0;i<10;i++)
	   {
	   	scanf("%d",&a[i]);
	   	if(a[i]%2!=0)
	   	{
	   		s=s+a[i];
	   	}
	   }
	  printf("sum of odd elements of arrray = %d",s);
	getch();
}   