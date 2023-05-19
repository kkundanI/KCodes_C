#include<stdio.h>
#include<conio.h>
#include<math.h>

	int facto(int);
	void main()
	{
		int n,f=0;
		printf("enter a no.\n");
		scanf("%d",&n);
	 	f=facto(n);
	 printf("result=%d",f);
	 getch();
    }


int facto(int x)
{
	int n;
	if(n==0)
	  return 1;
	else
	  return(n*facto(n-1));	
}