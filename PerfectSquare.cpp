// Perfect Squares
// Vivek Kaushal

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    long long int tries;
    cin >> tries;
    while (tries--) {
        long long int i,a,b,count;
        cin >> a >> b;
        count = floor(sqrt(b)) - ceil(sqrt(a)) + 1;
        cout << count << endl;
    }
    return 0;
}