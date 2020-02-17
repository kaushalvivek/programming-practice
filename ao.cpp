//
// Author Vivek Kaushal (dextronaut)
// Apples and Oranges (HackerRank)

#include <bits/stdc++.h>
using namespace std;

int main() {

	//inputs
	
	int i,s,t,a,b,m,n, apples = 0, oranges = 0;
	cin >> s >> t >> a >> b >> m >> n;
	int da[m], db[n];
	for (i = 0; i < m; i++)  {
		cin >> da[i];
	}
	for (i = 0; i < n; i++)  {
		cin >> db[i];
	}

	// other stuff

	for (i = 0; i < m; i++) {
		if (s-a <= da[i] && t-a >= da[i])
			apples++;
	}

	for (i = 0; i < n; i++) {
		if (b-t <= -db[i] && b-s >= -db[i])
			oranges++;
	}

	cout << apples << endl << oranges;
	return 0;
}