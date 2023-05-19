#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i ,n[5],d,s[5],m;
    for(i=0;i<5;i++)
    {
	printf("enter the number%d\n",i+1);
	scanf("%d",&n[i]);
    }
    for(i=0;i<5;i++)
     s[i]=0;
    for(i=5;i>0;i--)
    {
     printf("%d - ",n[i]);
        d=0;
        while(n[i]!=0) 
        {
		d = n[i]%10;
		s[i]= s[i]* 10 + d;
		n[i]=n[i]/10;
        }
	printf("%d\n",s[i]);
	}
	 getch();
}