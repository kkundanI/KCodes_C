#include<stdio.h>
#include<conio.h>
void main()
{ 
  char san[10],i,se,f=0;
   clrscr();
   printf("Enter any ten alphabet\n");
  for(i=0;i<10;i++)
       scanf("%c",&san[i]);
   printf("Enter letter to be check\n");
   scanf("%c",&se);
  for(i=0;i<10;i++)
  {
  	if(se==san[i])
  	{
  	f=1;
  	break;
  	}
  }
  	if(f==1)
  	printf("Yes!Letter matched\n");
  	else
  	printf("not found");
  getch();
}