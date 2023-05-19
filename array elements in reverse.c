#include<stdio.h>
#include<conio.h>
 void main()
 {
 	 int i,a[10];
 	 clrscr();
 	 printf("enter any ten numbers\n");
 	 for(i=0;i<10;i++)
 	   scanf("%d",&a[i]);
 	  printf("array elements in reverse\n");
 	 for(i=9;i>=0;i--) 
 	  printf("%d\t",a[i]);
 	 getch();
 }