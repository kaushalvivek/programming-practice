#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=0,min=0,ans;
	cin>>n;
	int A[n];
	int n2=n;
	while(n--) cin>>A[n2-n-1];       //Declarations and input done

	for(int i=0;i<n2;i++)
	{
		if(A[max]>A[i])	max=i;
		if(A[min]<A[i]) min=i;
	}

	if(max>min)
	{
		if(n2-max> min) ans=n2-1-min;
		else ans = max;
	}

	else
	{
		if(n2-min>max) ans=n2-1-max;
		else ans=min;
	}
	cout<<ans<<endl;
	return 0;
}
