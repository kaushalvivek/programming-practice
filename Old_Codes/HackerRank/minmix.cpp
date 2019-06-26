// Author Vivek Kaushal (dextronaut)
// Min Max Sum HackerRank

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int var[5];
	cin >> var[0] >> var[1] >> var [2] >> var[3] >> var[4];
	long long int min, max, sum = 0;
	min = 0;
	max = 0;
	for (int i = 0; i <= 4; i++) {
		if (var[max] < var[i])
			max = i;

		if (var[min] > var[i])
			min = i;	

		sum+= var[i];
	}

	cout << (sum-var[max]) << " " << (sum-var[min]);
	return 0;
}

