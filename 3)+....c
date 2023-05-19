// sum of an series , s= (a/2)+(a/3)+...
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,c=1; 
    float s=0,p;	clrscr();
    printf("enter range : \t");
    scanf("%d",&n);
	printf("enter any number\t");
	scanf("%d",&a);
	while(c<n)
	{
		c++;
		p=(float)a/c;
		s=s+p;
	}
	printf("%f",s);
	getch();
}