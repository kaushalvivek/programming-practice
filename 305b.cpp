#include<bits/stdc++.h>
using namespace std;

long long int x=0;
long long int gcd(long long int a, long long int b)
{
    if (a == b)
        return a;
 
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
	long long int p,q;
	int i,n;
	cin>>p>>q>>n;
	long long int temp,A[2][n];
	for (int i = n-1; i >= 0; i--) {
		cin>>A[0][i];
		A[1][i] = 1;
	}
	
	for(i = 0; i < n - 1; i++) {
		temp = A[1][i];
		A[1][i] = A[0][i];
		A[0][i] = temp;
		A[1][i+1] = A[0][i+1] * A[1][i] +A[0][i];
		A[0][i+1] = A[1][i];
		temp = A[0][i+1];
		A[0][i+1] = A[1][i+1];
		A[1][i+1] = temp;
	}

//	for(i = 0; i < n ; i++) {			//Test
//		cout<<endl<<A[0][i]<<'/'<<A[1][i]<<endl;
//	}

	long long int h1 = gcd(p,q);
	p/=h1;
	q/=h1;

	long long int h2 = gcd(A[0][n-1],A[1][n-1]);
	A[0][n-1]/= h2;
	A[1][n-1]/= h2;


//	cout<<endl<<p<<'/'<<q<<endl;			//Test
//	cout<<endl<<A[0][n-1]<<'/'<<A[1][n-1]<<endl;	//Test

	if(p == A[0][n-1] && A[1][n-1] == q)
		cout<<"YES"<<endl;
	
	else cout<<"NO"<<endl;
	return 0;
}
