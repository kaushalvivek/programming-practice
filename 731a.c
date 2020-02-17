#include<stdio.h>
#include<string.h>
#include<math.h>
int mod(int a)
{
	if(a<0)a=-a;
	return a;
}
int main()
{
	char a[100];
	scanf("%s", a);
	int s=(mod('a'-a[0]))>13?26-(mod('a'-a[0])):(mod('a'-a[0])),m,i;
	int n=strlen(a);
//	printf("%d", n);
	for(i=0;i<n-1;i++)
	{
		m=mod(a[i]-a[i+1]);
		s+=(m>13)?(26-m):m;
	}	
	printf("%d", s);
	return 0;
}
