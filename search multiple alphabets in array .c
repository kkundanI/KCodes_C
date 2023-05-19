
	#include<stdio.h>
#include<conio.h>
void main()
{ 
  char san[10], se[3];
  int i, k, f, j;
  clrscr();
  printf("Enter any  alphabet\n");
  for(i=0;i<10;i++)
  scanf("%c",&san[i]);
  for (k=0; k<6; k++)
  {
  	f=0;
  printf("Enter letter to be check\n");
  scanf("%c",&se[k]);
  for(i=0;i<10;i++)
  {
  	if(se[k]==san[i])
  	{
  	f=1;
  	break;
  	}
  }
  j = (i/2)+1;
  	if(f==1)
  	printf("Yes!Letter matched at location : %d\n", j);
  	else
  	printf("Sorry! Letter does not matched\n");
  }
  getch();
}
