//average of any numbers 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0,i,avg;
    printf(" enter the reange : \t");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
      {
      printf(" enter number %d\t",i+1);    
      scanf("%d",&a[i]);
      }
   for(i=0;i<n;i++)
   {
       s=s+a[i];
   }
   avg=s/n;
   printf("average of the given numbers is %d",avg);
   getch();
}