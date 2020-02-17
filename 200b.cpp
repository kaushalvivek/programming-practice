#include <iostream>
using namespace std;

int main () {
    
    int i, n, temp, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
    }
    long double x =  (long double)sum/n;
    cout << x;
    return 0;
}