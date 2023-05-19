#include<stdio.h>
#include<conio.h>
void main()
{
	int s=0,i=0,n1,n;
	clrscr();
	printf("enter any number ");
	scanf("%d",&n);
	n1 = n;
	while(i<n)
	{
		if (n%i==0)
		{
			s=s+i;
		}
		i++;
	}
	if(s==n)
	{
		printf(n1 ,"%d is perfect number");
	}
	{
		printf(n1 ,"%d is not perfect number");
	}
	getch();
}