#include<stdio.h>

long long int mod(long long int a)
{
	if(a<0) a=-a;
	return a;
}
int main()
{
	long long int a,b,c;
	scanf("%lld%lld%lld", &a,&b,&c);
	a=mod(a);
	b=mod(b);
	c=mod(c);
	long long int oe=((a+b)%2==0)?1:0;
	if((oe&&(c>=a+b)&&c%2==0)||(!oe&&(c>=a+b)&&c%2==1))
		puts("Yes");
	else
		puts("No");
	return 0;
}

