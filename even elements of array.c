//sum of all even array elements
#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,a[10];
	 clrscr();
	 printf("enter any ten numbers");
	 for(i=0;i<10;i++)
	   scanf("%d",&a[i]);
	   printf("even elements of array\n");
	  for(i=0;i<10;i++)
	  {
	   	 	if(a[i]%2==0)
	   	{
	   		printf("%d\t",a[i]);
	   	}
	  }
	getch();
}   