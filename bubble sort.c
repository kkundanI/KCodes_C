#include<stdio.h>
#include<conio.h>
void main()
{
    int n[5],j,i,t;
    clrscr();
    for( j=0;j<5;j++)
    {
        printf("enter number %d\t ",j+1);
        scanf("%d",&n[j]);
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5-j-1;i++)
        {
            if(n[i]>n[i+1])
            {
                t=n[i];
                n[i]=n[i+1];
                n[i+1]=t;
            }}}
     printf(" arranged numbers\n ");
     for(j=0;j<5;j++)
       printf("%d",n[j]);
      getch();
}