#include<stdio.h>
#include<conio.h>

	
	void main()
	{
		int n, i;
		clrscr();
		printf(" enter range : \n");
		scanf("%d",&n);
		int a[n] , b[n];
		a[0]=1;
        for(i=1;i<n;i++)
		{ 
		 b[i] = a[i-1] +a[i];
			printf(" %d",&b[i]);
		}
	getch();
	}
