//sum of all odd array elements
#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,a[10];
	 clrscr();
	 printf("enter any ten numbers\n");
	 for(i=0;i<10;i++)
	   	scanf("%d",&a[i]);
	   printf("\nodd elements of array = \t");
	 for(i=0;i<10;i++)
       {
	   	if(a[i]%2!=0)
	   	{
	   		printf("%d\t",a[i]);
	   	}
	   }
	getch();
}   