#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,a[5],t=0;
     clrscr();
     for(i=0;i<5;i++)
     {
          printf("enter number %d\t",i+1);
          scanf("%d",&a[i]);
     }
   for(i=0;i<4;i++)
   {
     for(j=i+1;j<5;j++)
     {
         if(a[i]>a[j])
         {
             t = a[i];
             a[i] = a[j];
             a[j] = t;
         } } }
         printf(" arranged numbers\n");
     for(i=0;i<5;i++)
      printf("%d",a[i]);
     getch();
    }    
     