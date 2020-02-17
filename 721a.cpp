#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,count=0,test=0,total=0, head=0;
	cin>>n;
	char A[n];
	int B[n];
	for(i=0;i<n;i++) B[i]=0;
	cin>>A;
	for(i=0;i<n;i++)
	{
		switch (A[i])
		{
			case 'B': count++;
				  head++;
				  test=1;
				  if(i==n-1) {B[i]=count; total++;}
				  break;

			case 'W': if(test==1)
				{
				   	B[i]=count;
					total++;
					count=0;
					test=0;
					break;
				}
	//			else
	//			{
	//				if(head==0 && i==n-1)
				
		}
	}

	cout<<total<<endl;
	for(i=0;i<n;i++) if(B[i]!=0) cout<<B[i]<<" ";

	return 0;

}
