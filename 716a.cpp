#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,temp,temp2,ans=0;
	cin>>a>>b;
	temp2=0;
	while(a--)
	{
		cin>>temp;
		if(temp-temp2>b) ans=1;
		else ans++;
		temp2=temp;
	}
	cout<<ans;
}
