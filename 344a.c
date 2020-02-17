#include<stdio.h>
int main()
{
	int count, group=1;
	scanf("%d",&count);
	int a;
	scanf("%d", &a);
	int temp;
	temp =a;
	int i;
	for(i=1;i<=count-1;i++)
		{
			scanf("%d", &a);
			if (temp!=a)
				{
					group++;
					temp =a;
				}
			else
				temp =a;
		}
		printf("%d", group);
	return 0;
}
