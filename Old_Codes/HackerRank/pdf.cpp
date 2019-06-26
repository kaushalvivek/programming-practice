//
// Author Vivek Kaushal (dextronaut)
// PDF Viewer - HackerRank

#include <bits/stdc++.h>
using namespace std;

int main () {

	int area = 0, i, var[26], max=-1;
	for (i = 0; i < 26; i++)
		cin >> var[i];

	char h[10];
	cin >> h;

	int count = strlen(h);
	for (i = 0; i < count; i ++)
		if(var[h[i]-97] > max)
			max = var[h[i]-97];

	area = max*count;
	cout << area; 
	return 0;
}

