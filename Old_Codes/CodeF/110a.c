#include<stdio.h>
int main()
{
	long long int i,n;
	scanf("%lld", &n);

	if(n<9) goto here;

	for(i=0;n>0;i++) 
	{
	if(n%10!=4 && n%10!=7) goto here;
		n/=10;
	}
	printf("YES");
	goto there;
	here:
	printf("NO");
	there:
	return 0;
}
