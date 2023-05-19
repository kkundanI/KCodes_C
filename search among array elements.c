// search among array elements
#include<stdio.h>
#include<conio.h>
void main()
 {
 	int a[10],i,se,f=0;
 	clrscr();
 	 printf("enter any ten numbers");
 	for(i=0;i<10;i++)
 	 scanf("%d",&a[i]);
 	printf("enter the search element");
     scanf("%d",&se);
 	for(i=0;i<10;i++)
 	 {
 	 	if( a[i]==se)
 	 	{
 	 	 f=1;
 	 	 break;
 	 	}
 	 }
 	 if(f==0)
 	  printf("soory elements is not found");
 	 else
 	 printf("element at %dth position ", ++i);
 	 getch();
 }
 	 	 