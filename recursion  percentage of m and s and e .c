//percentage of marks 
#include<stdio.h>
#include<conio.h>
	float pert(int sumf,int sum);
	void main()
	{
		int m,s,e,mf,sf,ef;
		printf("Enter full marks  for  math , science & english :\t");
		scanf("%d%d%d",&mf,&sf,&ef);
		printf("Enter marks got by student in m,s  and english :\t");
		scanf("%d%d%d",&m,&s,&e);
		int sumf = mf+sf+ef;
		int sum = m + s+ e; 
		printf("result in percentage = %f",pert(sumf,sum));
	getch();
	}
	
	
	float pert(int sumf,int sum)
	{
		float p ;
		p = (sum*100)/sumf;
		return p;
	}