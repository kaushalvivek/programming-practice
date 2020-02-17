#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,min,max;
	cin>>n;

	if(n%7==6) min=2*(n/7)+1;
	else min = 2*(n/7);
		
	if(n%7==1) max=min+1;
	else if(n%7==6) max=min+1;
	else if(n%7>1) max=min+2;
	else max=min;
	cout<<min<<" "<<max<<endl;
	return 0;
}
