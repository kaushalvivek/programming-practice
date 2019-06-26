#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
//	scanf("%d%d", &a,&b);
	cin>>a>>b;
	int max=(a>b)?a:b;
	int num=7-max;
	int c;
	if(num%2==0) c =1;
	if(num%3==0) c =2;
	if(num%6==0) c =3;

	switch (c)
	{
		case 1: cout<<num/2<<"/"<<3; break;
		case 2: cout<<"1/2"; break;
		case 3: cout<<"1/1"; break;
		default: cout<<num<<"/6";
	}
	return 0;
}
