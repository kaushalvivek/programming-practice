#include<stdio.h>

int mod(int a)
{
if(a<0) return -a;
else return a;
}

int main()
{
	int i,a,temp;
	for(i=1;i<=25;i++)
	{
		scanf("%d",&temp);
		if(temp==1) a=i;
	}

	int row =(a%5==0)?(a+1)/5:(a/5)+1;
	int c= (a%5==0)?(a-1)/5:(a/5);
	a-=c*5;
	int col=a%6;

	row=mod(3-row);
	col=mod(3-col);

	printf("%d", row+col);
	return 0;
}
