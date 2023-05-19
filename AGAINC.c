// area and perimeter of square
#include<stdio.h>
#include<conio.h>
void main()
{
     int  s,area,perimeter;
     clrscr();
     printf("enter one side of square ");
     scanf("%d",&s);
     area = s*s;
     perimeter = 4*s;
     printf(" area of the square = %d\n",area);
     printf(" perimeter of square = %d", perimeter);
     getch();
 } 