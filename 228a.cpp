#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int A[4],count=0;
	cin>>A[0]>>A[1]>>A[2]>>A[3];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(A[i]==A[j] && A[i]>0) {count++; A[j]=-A[i];}
		}
	}
	cout<<count;
	return 0;
}
