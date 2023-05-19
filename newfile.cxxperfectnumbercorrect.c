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
		i++;
		if (n%i==0)
		{
			s=s+i;
		}
	}
	if(s==2*n)
	{
		printf("%d is perfect number",n1);
	}
	else
	{
		printf("%d is not perfect number",n1);
	}
	getch();
}