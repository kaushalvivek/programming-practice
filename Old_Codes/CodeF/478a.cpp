#include <iostream>
using namespace std;
int main() {
    float s = 0,t=5;
    while(t--) {
        float temp;
        cin >> temp;
        s+=temp;
    }
    if (s == 0) {
        cout << -1;
        return 0;
    }
    s/=5;
    int k = (int)s;
        if(s - k == 0) cout << s;
    else cout << -1;
    return 0;
}