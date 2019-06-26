#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a,&b);
	int p,q;
	if(a>b)
	p=a,q=b;
	else
	p=b,q=a;
	printf("%d ", q);
	printf("%d", (p-q)/2);
	
	return 0;
}
