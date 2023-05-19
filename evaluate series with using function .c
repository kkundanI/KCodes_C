#include<stdio.h>
#include<conio.h>
#include<math.h>

	int facto(int);
	void main()
	{
		int i=0,f,s=0;
	for(i=1; i<=4;i++)
	 {
	 
	 	s=s+(i/facto(i));
	 }
	 printf("result=%d",s);
	 getch();
    }


int facto(int x)
{
	int f=1,i=0;
	for(i=1; i<=x;i++)
	f=f*i;
	return f ;
}