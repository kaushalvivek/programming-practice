#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int i = 0,temp;
    while (n--) {
        cin >> temp;
        if (5-temp >=k)
            i++;
    }
    cout << i/3 << endl;
    return 0;
}