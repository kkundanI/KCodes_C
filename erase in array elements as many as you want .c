#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s,a,b,j,f=0;
     	printf("enter range : ");
     	scanf("%d",&a);
     	int n[a];
     for(i=0;i<a;i++)
        { 
        printf("enter number %d\t",i+1);
        scanf("%d",&n[i]);
        }
	   printf("enter wn range : ");
  	 scanf("%d",&b);
  	 int wn[b];
  	
	 for(j=0;j<b;j++)
	 {
	    printf("enter %d wn\t",j+1);
  	  scanf("%d",&wn[j]);
	 }
    printf("output\n");
  for(i=0;i<a;i++)
    {
        f=0;
        for(j=0;j<b;j++)
        {
        if(n[i]==wn[j])
          {
              f=1;
         }}
         if(f!=1)
         {
             printf("%d\n",n[i]);
    }
    }
	getch();
}