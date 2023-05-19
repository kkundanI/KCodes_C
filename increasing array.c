//increasing array
#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	int n=1,i=1,a[n];
	while(i!=00)
	{
	//	if(a[i]==00)
		 //break;
		printf("Enter %d :\t",i);
		scanf("%d",&a[i]);
		a[n+=1];
	i++;
	}
	for(i=0;i<n;i++)
	{
		printf("r - %d",a[i]);
	}
	
}