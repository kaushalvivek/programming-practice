#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,temp;
	cin >> n;
	int d1 = 0, d2 = 0;
	for(int j = 1,i = 1;i < n || j < n+1 ; i++) {
		cin >> temp;
		if(i>n)i%=n;
		if (i == j) d1 += temp;
		if (i == n-j+1) d2+=temp;
		if (i == n) j++;
		//cout << "i is " << i <<" ||| j is " << j << " ||| d1 is " << d1 << " ||| d2 is " << d2 << endl;
	}
	cout << abs(d1-d2) << endl;
	return 0;
}