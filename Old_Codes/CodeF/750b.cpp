#include <bits/stdc++.h>
using namespace std;

int main() {
	int count;
	int t = 1,q=1;
	cin >> count;
	int a;
	int h = 0, v = 0;
	string b;
	while(count--) {
		cin >> a >> b;
		
		if (abs(v) % 40000 == 0 && b[0] != 'S') {
			cout << "NO";
			return 0;
		}

		if (abs(v) % 20000 == 0 && abs(v)%40000 !=0 && b[0] != 'N') {
			cout << "NO";
			return 0;
		}

		if (b[0] == 'S') v-=a;
			else if (b[0] == 'N') v+=a;
			else if (b[0] == 'E') h+=a;
			else h-=a;

		if(count == 0) {
			if (abs(v)%40000!= 0)
				cout << "NO";
			else
				cout << "YES";
		}
	}
	return 0;
}