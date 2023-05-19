//product of two matrices
#include<stdio.h>
#include<conio.h>
void main()
{
     int n[3][3],m[3][3],i,j;
     clrscr();
     int p[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
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
     printf(" matrix product of A and B\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++) 
         {
           
            p[i][i] = p[i][j] + (n[i][j] * m[j][i]);
           
         }
     }
     printf("product\n");
     for(i=0;i<3;i++)
     {
         for(i=0;i<3;i++)
         printf("%d\t",p[i][i]);
        printf("\n");
     }
     getch();
}          