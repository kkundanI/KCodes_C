#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,n[10];
	 clrscr();
	 printf("enter any ten numbers");
	 for(i=0;i<10;i++)
	  scanf("%d",&n[i]);
	 printf("output\n");
	 for(i=0;i<10;i++)
	  printf("%d\t",n[i]);
	 getch();
}