#include<stdio.h>
#include<conio.h>
void main()
{
	 int se,i=0,lb,ub,mid,a[5],f=0;
	 clrscr();
	 for(i=0;i<5;i++)
	   {
	   	printf(" enter the number%d\t",i+1);
	       scanf("%d",&a[i]);
	   }
	 printf("enter the search element");
	 scanf("%d",&se);
	 lb=0;
	 ub=4;
	 while(lb<=ub)
	 {
	 	mid = (lb+ub)/2;
	 	if(se>a[mid])
	 	 lb=mid+1;
	 	if(se<a[mid])
	 	 ub=mid-1;
	 	if(a[mid]==se)
	 	 {
	 	 f=1;
	 	 break;
	 	 }
	 }
	 if(f==1)
	 printf("yeap , number's in %d position",mid+1);
	 else
	 printf("nope not found");
 getch();
}