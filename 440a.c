#include<stdio.h>
int main()
{
	int i,a,temp,j;
	scanf("%d", &a);
	int A[a];
	for(i=0;i<a;i++)
	A[i]=0;

	for(i=0;i<a-1;i++)
	{
		scanf("%d", &temp);
		A[temp-1]=1;
//		for(j=0;j<a;j++) if(A[j]==temp) A[j]=0; There's always a better way
	}

	for(i=0;i<a;i++) if(A[i]==0) printf("%d", i+1);
	return 0;
}
