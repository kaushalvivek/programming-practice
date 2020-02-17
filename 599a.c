#include<stdio.h>
int main()
{
	long long unsigned int d1,d2,d3,d;
	scanf("%llu%llu%llu", &d1,&d2,&d3);
	if((d3<=d1+d2)&&(d1<=d2+d3)&&(d2<=d1+d3))
	{
		d=d1+d2+d3;
	}
	else if((d3>d1+d2)&&(d1<=d2+d3)&&(d2<=d1+d3))
	{
		d = 2*(d1+d2);
	}
	
	else if((d3<=d1+d2)&&(d1>d2+d3)&&(d2<=d1+d3))
	{
		d = 2*(d3+d2);
	}

	else if((d3<=d1+d2)&&(d1<=d2+d3)&&(d2>d1+d3))
	{
		d = 2*(d1+d3);
	}

	printf("%llu", d);

	return 0;
}
