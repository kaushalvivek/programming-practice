#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,temp,count=1,min=1000000001;
	cin>>n;
	long long int n2=n,k;
	while (n--)
	{
		cin>>temp;
		if(temp<min) 
		{
			min=temp;
			k=n2-n;
			count=1;
		}
		else if (temp==min) 
		{
			count++;
		}
	}

	if(count>1) goto here;

	cout<<k<<endl;
	return 0;
	here:
	cout<<"Still Rozdil"<<endl;
	return 0;
}
