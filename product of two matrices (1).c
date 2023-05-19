//product of two matrices
#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,o,x,y,z;
     printf(" enter ranges of i , j , o ,");
     scanf("%d%d%d",&i,&j,&o);
     int n[i][j],m[j][o],p[i][o];
     clrscr();
     printf(" enter elements of matrix A \n");
     for(x=0;x<i;x++)
     {
         for(y=0;y<j;y++)
         scanf("%d\t",&n[x][y]);
     }
     printf("enter elements of matrix B\n");
     for(y=0;y<j;y++)
     {
         for(z=0;z<o;z++)
          scanf("%d\t",&m[y][z]);
     }
     printf(" matrix product of A and B\n");
     for(x=0;x<3;x++)
     {
         for(z=0;z<3;z++)
         {
            for(y=0;y<j;y++)
            {
            p[x][z] = n[x][y] * m[y][z];
            printf("%d\t",p[x][z]);
            }
            }
        printf("\n");
     }
     getch();
}          