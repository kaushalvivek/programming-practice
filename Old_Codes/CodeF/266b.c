#include<stdio.h>
int main()
{
	int i,n,t;
	scanf("%d%d", &n,&t);
	char temp,A[n];
	for(i=0;i<n;i++) scanf("\n%c",&A[i]);

	while(t--)
	{
		for(i=0;i<n-1;i++)
			if((A[i+1]=='G') && (A[i]=='B'))
				{
					temp=A[i];
					A[i]=A[i+1];
					A[i+1]=temp;
					i++;
				}
	}
	for(i=0;i<n;i++) printf("%c", A[i]);
	
	return 0;
}
