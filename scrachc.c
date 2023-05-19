//area and perimeter of an square
#include<stdio.h>
#include<conio.h>
void main()
{ 
    int side , area ,peri;
    clrscr();
    printf(" enter the side of square");
    scanf("%d",&side);
    area = side*side;
    peri= 4* side;
    printf(" area of the triangle = %d\n",area);
    printf("perimeter of the triangle=%d",peri);
    getch();
}