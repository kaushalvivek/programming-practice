#include <iostream>
using namespace std;

int main () {
    long long int a;
    cin >> a;
    long long int ans = ((a*(a+1))/2 + (a*(a-1)*(a-2))/2 - (a*(a-1)*(a-2))/3);
    cout << ans;
    return 0;
}