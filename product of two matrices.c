
#include<stdio.h>
#include<conio.h>
void main()
{
     int n[3][3],m[3][3],i,j,k;
     int p[3][3] = { {0,0,0},{0,0,0},{0,0,0}};
     printf(" enter elements of matrix A \n");
     for(i=0;i<3;i++)
     {
         for(k=0;k<3;k++)
         scanf("%d",&n[i][k]);
     }
     printf("enter elements of matrix B\n");
     for(k=0;k<3;k++)
     {
         for(j=0;j<3;j++)
          scanf("%d",&m[k][j]);
     }
    
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
            for(k=0;k<3;k++)
            {
                  p[i][j] = p[i][j] + (n[i][k]* m[k][j]);
             }}}
     printf(" product of matrix\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         printf("%d\t",p[i][j]);
         printf("\n");
     }
             
     getch();
}          