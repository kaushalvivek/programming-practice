#include<bits/stdc++.h>
using namespace std;
int mod(int a)
	{
		if(a<0) return -1*a;
		else return a;
	}
int main()
{
	int i=0,n;
	cin>>n;
	char A[n];
	cin>>A;
	while(n--)
	{
		if(A[n]=='0') i--;
		else i++;
	}
	i=mod(i);
	cout<<i;
	return 0;
}
