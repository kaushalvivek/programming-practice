#include<stdio.h>
int main()
{
int a,b,n,i,q,r, test=1;
scanf("%d%d", &a,&b);
for(i=0;test;i++)
{
q=(a-2*i)/2;
r=a%2+2*i;
if((q+r)%b==0)
	{
		n=q+r;
		test--;
	}
if(b>a)
	{
		n=-1;
		test--;
	}
}
printf("%d", n);
return 0;
}
