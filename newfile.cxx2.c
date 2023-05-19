/* area and perimeter of square */
#include<stdio.h>
#include<conio.h>
void main()
{
	int s ,peri ,area;
	printf("side of square\n");
	scanf("%d",&s);
	peri = 4*s;
	area = s*s;
	printf("area = %d",area);
	printf("perimeter=%d",peri);
	getch();
}