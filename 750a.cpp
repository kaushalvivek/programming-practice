#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k ;
	int time = 240 - k;
	int temp1 = ((time*2)/5);
	int temp = ((-1 + sqrt(1+4*temp1))/2);
	if (n>temp)
		cout << temp;
	else
		cout << n;
	return 0;
}