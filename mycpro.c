#include<stdio.h>
#include<conio.h>
int main()
{
	 int c,s=0,p,n;
	 clrscr();
	 printf("enter how many number's sum you want to find");
	 scanf("%d",&n);
	 while(c<n)
	 {
	 	c++;
	 	
	 	scanf("%d",&p);
	     s=s+p;
	 }
	 printf("sum=%d",s);
	 getch();
}