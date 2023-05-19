// search among array elements
#include<stdio.h>
#include<conio.h>
void main()
 {
 	int x,i,y,c=0,j;
 	printf("enter number's range : ");
 	scanf("%d",&x);
 	int a[x];
 	for(i=0;i<x;i++)
 	{
 	 printf("number %d\t",i+1);
 	 scanf("%d",&a[i]);
 	}
 	xy:
  	printf("enter se range : ");
 	 scanf("%d",&y);
 	 int se[y];
 	  if( y >x)
 	 {
 	     printf("enter y < x\n");
 	   goto xy;
 	 }
 	 for(i=0;i<y;i++)
 	 {
    	printf(" search element %d\t",i+1);
        scanf("%d",&se[i]);
 	 }
 	for(i=0;i<x;i++)
 	 {
 	 	for(j=0;j<y;j++)
 	 	{
 	 	if( se[j] ==a[i])
      	 printf("yeap ,%d number's in %d\n",se[j], i+1);
 	  }}
 	 getch();
 }
 	 	 