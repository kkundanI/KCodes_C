// search among array elements
#include<stdio.h>
#include<conio.h>
void main()
 {
 	int a[10],i,se[3],c=0,j;
 	clrscr();
 	for(i=0;i<10;i++)
 	{
 	 printf("number %d\t",i+1);
 	 scanf("%d",&a[i]);
 	}
 	 for(i=0;i<3;i++)
 	 {
    	printf(" search element %d\t",i+1);
        scanf("%d",&se[i]);
 	 }
 	for(i=0;i<10;i++)
 	 {
 	 	for(j=0;j<3;j++)
 	 	{
 	 	if( se[j] ==a[i])
      	 printf("yep ,%d number's in %d\n",se[j], i+1);
 	  }}
 	 getch();
 }
 	 	 