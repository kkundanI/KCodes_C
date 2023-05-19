//largest and smallest elements  of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
     int n[3][3],r,s,l,c;
     clrscr();
     printf(" enter any nine number \n");
     for(r=0;r<3;r++)
     {
         for(c=0;c<3;c++)
         scanf("%d",&n[r][c]);
     }
     l=n[0][0];
     s=n[0][0];
     for(r=0;r<3;r++)
     {
         for(c=0;c<3;c++)
         {
            if(n[r][c]>l)
              l= n[r][c];
            if(n[r][c]<s)
              s= n[r][c];
              
         }
        printf("\n");
     }
     printf(" smallest number = %d\n",s);
     printf("largest number = %d",l);
     getch();
}          