#include<stdio.h>

long long int Power(long long int a, long long int b)
{
	long long int x=a,y=b,p=1;	
	while(y--)
	p=p*x;

	return p;

}


int main()
{	
	long long int i,n,z=0,temp=0,ans=0,t=1;
	long long int A[1000];
	
		scanf("%lld", &n);
		for(i=0;i<n;i++)
		{
			scanf("%lld", &A[i]);
			if(A[i]==5)
				temp++;
			else
				z++;

			if(temp==9)
			{
				ans++;
				temp=0;
			}
		}
			if(temp<9 && ans==0  && z==0) {puts("-1"); goto here;}
		if(z>0)
	{
		for(i=1 ; i<=9*ans ; i++)
			printf("5");
		if(ans!=0)
		{	
			for(i=0;i<z;i++)
			printf("0");
		}
		else
		printf("0");
	}
	else
		printf("-1");

	here:
	return 0;
}

