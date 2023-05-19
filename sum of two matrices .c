//largest and smallest elements  of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
     int n[3][3],m[3][3],s[3][3],i,j;
     clrscr();
     printf(" enter elements of matrix A \n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         scanf("%d",&n[i][j]);
     }
     printf("enter elements of matrix B\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
          scanf("%d",&m[i][j]);
     }
     printf(" matrix sum of A and B\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
            s[i][j] = n[i][j] + m[i][j];
            printf("%d\t",s[i][j]);
              
         }
        printf("\n");
     }
     getch();
}          