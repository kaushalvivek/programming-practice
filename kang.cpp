// Author Vivek Kaushal (dextronaut)
// Kangaroo HackerRank

#include <iostream>
#include <cmath>
using namespace std;

bool is_integer(float k) {
  return std::floor(k) == k;
}
int main() {
double x1,v1,x2,v2;
cin >> x1 >> v1 >> x2 >> v2;
if ( is_integer(abs(x1-x2)/abs (v1-v2)) && (((x1 - x2) * (v1 - v2)) < 0))
	cout << "YES";
else
	cout << "NO";

return 0;
}
