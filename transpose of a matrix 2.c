//transpose of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
     int n[3][3],r,c;
     clrscr();
     printf(" enter any nine number ");
     for(r=0;r<3;r++)
     {
         for(c=0;c<3;c++)
         scanf("%d",&n[r][c]);
     }
     printf("the transpose of matrix you have entered\n");
     for(c=0;c<3;c++)
     {
         for(r=0;r<3;r++)
         printf("%d\t",n[r][c]);
        printf("\n");
     }
     getch();
}          