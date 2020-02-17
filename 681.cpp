#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0,a,b;
	cin>>n;
	string A;
	while(n--)
	{	cin>>A;
		cin>>a>>b;
		if(b>a && a>=2400) goto here;
	}
	
	cout<<"NO"<<endl;	
	return 0;

	here:
	cout<<"YES"<<endl;
	return 0;
}
