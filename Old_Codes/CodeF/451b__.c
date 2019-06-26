#include<stdio.h>
int main()
{
	int i,a,b,n,temp2,temp,test=0,count=0;
	scanf("%d", &n);i=n;
	scanf("%d", &temp2);
	n--;
	while(n--)
	{
		scanf("%d", &temp);
		if((temp<temp2)&&(!test))
		{
			test=1;
			count++;
			a=i-n;
		}

		else if((temp>temp2)&&(test))
		{
			test=0;	
			count++;
			b=i-n;
		}

		temp2=temp;
	}

//	printf("%d", count);
	
	if((count!=2)&&(count!=1))
	puts("no");
	
	else if(count==1)
	printf("yes\n1 %d", i);
	else
	{puts ("yes");
	printf("%d %d", a-1,b-1);}

	return 0;
}
