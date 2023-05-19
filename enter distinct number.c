#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,j,n[10];
	 clrscr();
	 for(i=0;i<10;i++)
	 {
	  printf("enter the number %d\t",i+1);
	  scanf("%d",&n[i]);
	  for(j=0;j<i;j++)
	  {
	   if(n[i]==n[j])
	   {
	    printf("entered number is similar to no. %d\n",i+1);
	    printf("so, enter the no. %d again\n",i+1);
	    i=i-1;
	 }}}
	 printf("output\n");
	 for(i=0;i<10;i++)
	  printf("%d\t",n[i]);
	 getch();
}