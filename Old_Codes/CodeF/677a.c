#include<stdio.h>
int main()
{
int n,h,temp,ans=0;
scanf("%d%d", &n,&h);
int i;
for(i=1;i<=n;i++)
	{
		scanf("%d", &temp);
		if(temp>h)
		ans+=2;
		else
		ans++;
	}
	printf("%d", ans);


return 0;
}
