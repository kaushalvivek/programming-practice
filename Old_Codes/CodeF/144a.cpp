#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int A[n];
	int max=0,min=n-1;
	for(i=0;i<n;i++) cin>>A[i];
	
	for(i=0;i<n;i++)
	{
		if(A[i]>A[max]) max=i;
		if(A[i]<=A[min]) min=i;
	}

	int x = (max<min)? max+n-min-1 : max+n-min-2;
	cout<<x;
	return 0;
}
