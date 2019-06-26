#include <iostream>
using namespace std;

int main () {
    int n, p = 101, ans = 0;
    cin >> n;
    while (n--) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        if (temp2 < p) p = temp2;
        ans+=temp1*p;
    }
    cout << ans;
    return 0;
}