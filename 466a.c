#include<stdio.h>
int main()
{
	int n,m,a,b, p1, p2;
	//Taking inputs
	scanf("%d%d%d%d", &n,&m,&a,&b);
	
	//calculations
	if (b<=m*a)
	{
		if(b>a*(n%m))
		{
			p2 = n%m;
			p1 = n/m;
		}
		
		else
		{
			p2=0;
			p1=n/m +1;
		}
	}

	else
	{
		p1=0;
		p2=n;
	}
	//output
	printf("%d\n", b*p1+a*p2);
	return 0;
}
