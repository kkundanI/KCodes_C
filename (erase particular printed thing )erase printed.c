#include<stdio.h>
#include<conio.h>
void main()
{
	int n ;
	printf(" enter any number ");
	scanf("%d",&n);
	if(n==0)
	{
		getch();
		printf("null");
		getch();
		clrscr();
	}
	printf("result = %d",n);
	getch();
}
/*
or ,
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int n;
 	printf("enter any number");
 	scanf("%d",&n);
 	getch();
 	printf("nothing wanna say to you just wanna talk");
 	getch();
 	clrscr();
 	printf("result %d",n);
 	getch();
 }
 */
 