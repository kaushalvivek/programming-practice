#include <bits/stdc++.h>
using namespace std;

int main () {
	int n,k,m;
	cin >> n >> k >> m;
	int i,A[n],temp;
	for (i = 0; i < n; i++)
		cin >> A[i];
	for(i = 0; i < m ; i++) {
		cin >> temp;
		int temp2 = 
		cout << A[(temp+k)%(n)] << endl;
	}
	return 0;
}