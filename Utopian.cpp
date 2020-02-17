#include <iostream>
using namespace std;

int main () {
    long long int t,n,i = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        while (1) {
            if (n == 0) break;
            n--;
            i*=2;
            if (n == 0) break;
            n--;
            i+=1;
        }
        cout << i << endl;
        i = 1;
    }
    return 0;
}