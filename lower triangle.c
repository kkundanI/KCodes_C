//lower triangle  of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
     int n[3][3],r,trace=0,c;
     clrscr();
     printf(" enter any nine number ");
     for(r=0;r<3;r++)
     {
         for(c=0;c<3;c++)
         scanf("%d",&n[r][c]);
     }
     printf("output\n");
     for(r=0;r<3;r++)
     {
         for(c=0;c<3;c++)
         {
          if (r>=c)
          printf("%d\t",n[r][c]);
          else
          printf("%d\t",0);
         }
        printf("\n");
     }
     getch();
}          