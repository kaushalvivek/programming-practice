#include <bits/stdc++.h>
using namespace std;

void check (long long int num);
bool prime (long long int a);
int main() {
	int count;
	cin>>count;
	while(count--) {
		long long int temp;
		cin >> temp;
		check(temp);
	}
	return 0;
}

void check (long long int num) {
	bool test = false;
	long long int i;
	if (!(num & 1) && num != 4) {
		cout << "NO" << endl;
		return;
	}
	
	else {
		for (int i = 3; i < num; i+=2) {
			
			if(num % i == 0 && (test || !prime(i))) {
					cout << "NO" << endl;
					return;
			}

				test = true;

		}

		cout << "YES" << endl;
		return;
	}
}

bool prime (long long int a) {
	long long int i;
	for(i = 3; i < a/3 ; i+=2) {
		if (a % i == 0)
			return false;
	}
	return true;
}