#include <iostream>
using namespace std;

int main () {
    int tries;
    cin >> tries;
    while (tries--) {
        int a;
        cin >> a;
        if (360 % (180 - a) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}