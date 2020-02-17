#include<stdio.h>
int main()
{
	int a,i,b,temp,j;
	scanf("%d%d", &a,&b);
	int A[a],sum=0;
	for(i=0;i<a;i++)
		scanf("%d", &A[i]);
	for(i=0;i<a;i++)
	{
		for(j=i;j<a;j++)
		{
			if(A[j]<A[i])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}	
	}

	for(i=0;i<a;i++)
	{
		printf("%d", A[i]);
		sum+=A[i];
	}
	printf("\n%d", -sum);
	return 0;
}
