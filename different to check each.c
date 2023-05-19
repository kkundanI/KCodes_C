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
	   for(i=i;i>0;i--)
	   {
 	   if(a[i]==a[i-1])
	    {
	   	printf("please enter another different no.");
	   	i--;
	    }
	   }
	    
	   printf("number you entered =%d\t",a[i]);
	}
	 getch();
}