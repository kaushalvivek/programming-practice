#include<stdio.h>
int main()
{
	long long int i,n,x,test,kids=0;
	char sign;
	scanf("%lld%lld", &n,&x);
	for(i=0;i<n;i++)
	{
//		sign=getchar();
		scanf("\n%c ", &sign);
//		printf("%c", sign);
		scanf("%lld", &test);
		if(sign=='+')
		x+=test;

		else if(x-test<0)
			kids++;

		else {x-=test; /*printf("%d", x);*/}
	}

	printf("%lld %lld", x,kids); 
	return 0;
}
