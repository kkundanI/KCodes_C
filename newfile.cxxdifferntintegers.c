#include<stdio.h>
#include<conio.h>
void main()
{
	int i,l,a[5];
	clrscr();
	printf("enter any 5 numbers");
	for(i=0;i<5;i++)
	{
	   scanf("%d" ,&a[i]);
	   for(l=i;l>0;l++)
	   {
	 	if(a[i-1]==a[i])
	 	 { printf("bhutni ke enter another number");
	 	 i--;
	 	 
	 	 }
	   }
	   
	   printf("%d",a[i]);
	 }
	 getch();
}