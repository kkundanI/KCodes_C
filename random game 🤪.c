#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
 void main()
 {

 	int n,c=0,f=0,k=0,x;
 	xy:
 		c=0;
 		f=0;
 		srand(time(0));
 		x=rand()%10+1;
 	
  //	printf("random number is  %d", x[i]);
 		printf("welcome player \n");
 		
 	
 		printf("	to end the game enter 0\n");
 		printf("guess the no b/w 0 to 10\n");
 		do 
 		{
 		printf("	it's %d time \n		guess the no : \n",c);
 		
 		scanf("%d",&n);
 		if(n==x)
 		printf(" yep , it's %d\n",x);
 		if(n>x)
 		printf("number's smaller \n");
 		if(n<x)
 		printf(" number's greater\n");
 		if(n==0)
 		{
    	  f=1;
 		break;
 		}
 		c++;
 		}
 		while(n!=x);
 		if(f!=1)
 		{
 		printf(" you took  %d guesses",c);
 		printf(" enter 1 to play again\n");
 		}
 		if(f==1)
 		printf("you've ended the game in between  to start again enter 1");
 		scanf("%d",&k);
 		if(k==1)
 		{
 		printf("welcome again\n");
 		 goto xy;
 		}
         
 
  	getch();
 }