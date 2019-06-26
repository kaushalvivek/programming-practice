#include <iostream>
using namespace std;

int main () {
    int k,n,w;
    cin >> w >> n >> k;
    if ((w*(k+1)*k)/2 - n > 0)
    cout << (w*(k+1)*k)/2 - n;
    else cout << 0;
    return 0;
}