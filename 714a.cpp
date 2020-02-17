#include<iostream>
using namespace std;
int main()
{
	long long int l1,l2,r1,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	long long int min=(l1>l2)?l1:l2;
	long long int max=(r1<r2)?r1:r2;
	long long int ans= max-min+1;
	if(k>=min && k<=max)ans--;
	cout<<((ans>0)?ans:0);
	return 0;	
}
