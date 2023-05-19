#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s,a;
	printf("enter range : ");
	scanf("%d",&a);
    int n[a];
    
	printf("enter any number\n");
for(i=0;i<a;i++)
	 scanf("%d",&n[i]);
  printf("enter the wrong number\t");
  scanf("%d",&s);
  printf("output\n");
  for(i=0;i<a;i++)
    {
        if(n[i]==s)
         { 
          continue;
         }
        printf("%d\t",n[i]);
    }
	getch();
}
	                                             
	                             