#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,a,b,c;
	cin>>a>>b>>c;
	for(i=0;a*i<=c;i++)
	{
		for(j=0;a*i+b*j<=c;j++)
		{
			if(a*i+b*j==c)
			goto here;
		}
	}
	cout<<"No"<<endl;
	return 0;
	here:
	cout<<"Yes"<<endl;
	return 0;
}
