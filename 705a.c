#include<stdio.h>
int main()
{
	int n,temp=0;
	scanf("%d", &n);
	int i;
	printf("I hate ");
	for(i=2;i<=n;i++)
	{
		if (temp==0)
		{
			printf("that I love ");
			temp=1;
		}
		else
		{
			printf("that I hate ");
			temp =0;
		}
	}
	printf("it");
	return 0;
}
