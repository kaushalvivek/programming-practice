#include<stdio.h>
// Need a better prime code
int prime(int a)
{
	int i,fact=0;
	if(a==2 || a==3) return 1;
	
	if((a-1)%6 !=0 && (a+1)%6 !=0) return 0;

	for(i=2;i<a;i++) if(a%i==0) goto here1;
	return 1;
	here1: return 0;
	
}

//No. of unique prime factors
int factor(int a)
{
	int i, ans=0;
	for(i=1;i<=a;i++) if(prime(i) && a%i==0) ans++;
	return ans;
}
int main()
{
	int i,a,ans=0;
	scanf("%d", &a);
	for(i=1;i<=a;i++) if (factor(i)==2) ans++;
	printf("%d", ans);
	return 0;
}
