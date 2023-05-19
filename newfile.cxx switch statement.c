#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,a,b,s=0,sos,aos=0,k,o,q,si=0;
	do
	{
		clrscr();
		printf("1 for addition of two numbers\n");
		printf("2 for area of square\n");
		printf("3 for simple\n ");
		printf("4 for exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
		 	printf("enter any two no.");
		 	scanf("%d%d",&a,&b);
		 	s=a+b;
			 printf("sum=%d",s);
			break;
			case 2:
		 	printf("enter the side of square");
		 	scanf("%d",&sos);
		 	aos = sos * sos;
		 	printf("area = %d",aos);
			break;
			case 3:
			 printf(" enter p,r,t");
			 scanf("%d%d%d",&k,&o,&q);
			 si=(k*o*q)/100;
		 	printf("simple interest=%d",si);
			break;
			case 4:
		 	printf("thank you");
			break;
			default:
		 	printf("wrong choice please try again");
			break;
		}
	}
	while(ch!=4);
	getch();
}