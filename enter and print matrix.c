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
     printf(" output \n");
     for(r=0;r<3;r++)
     {
         for(c=0;c<3;c++)
         printf("%d\t",n[r][c]);
        printf("\n");
     }
     getch();
}