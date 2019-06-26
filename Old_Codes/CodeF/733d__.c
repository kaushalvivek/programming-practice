#include<stdio.h>
int main()
{
	int j,i,n,test=0;
	scanf("%d", &n);
	int A[n],B[n],C[n], D[n];
	for(i=0;i<n;i++) 
	{
		scanf("%d%d%d", &A[i],&B[i],&C[i]);
		D[i] =0;
	}
	
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
		{	
			if(i==j) continue;
			if(A[i]==A[j] || A[i]==B[j] || A[i]==C[j])
			{
				if(B[i]==B[j] || B[i]==A[j] || B[i] || C[j] || C[i]==C[j] || C[i]==A[j] || C[i] == B[j])
				D[i]=1;
				test++;
				continue;
			}

			if(B[i]==A[j] || B[i]==B[j] || B[i]==C[j])
			{
				if(A[i]==B[j] || A[i]==A[j] || A[i] || C[j] || C[i]==C[j] || C[i]==A[j] || C[i] == B[j])
				D[i]=1;
				test++;
				continue;
			}

			if(C[i]==A[j] || C[i]==B[j] || C[i]==C[j])
			{
				if(B[i]==B[j] || B[i]==A[j] || B[i] || A[j] || A[i]==C[j] || A[i]==A[j] || A[i] == B[j])
				D[i]=1;
				test++;
				continue;
			}
		}
	}

	printf("%d\n", test);
	for(i=0;i<n;i++) if(D[i]!=0) printf("%d ", i+1);
	return 0;
}
