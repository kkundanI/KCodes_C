#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int s=0,i,f=1;
	clrscr();
	for(i=1; i<=4;i++)
	 {
	 	f=f*i;
	 	s=s+(i/f);
	 }
	 printf("result=%d",s);
	 getch();
}