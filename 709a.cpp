#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,b,d,t,sum=0,ans=0;
	cin>>n>>b>>d;
	while(n--)
	{
		cin>>t;
		if(t<=b) sum+=t;
		if(sum>d)
		{
			sum=0;
			ans++;
		}
	}

	cout<<ans<<endl;
	return 0;
}
