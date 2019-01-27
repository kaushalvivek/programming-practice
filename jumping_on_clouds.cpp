#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k, jumps = 0, zero = 0;
    cin >> n;
    for (int i=0;i <n; i++) {
        cin >> k;
        if (k == 0) zero++;
        if ((i == n-1) && k == 0) {
            jumps+=zero/2;
        }
        else if (k == 1){
            jumps+=zero/2;
            jumps++;
            zero = 0;
        }
    }
    cout << jumps;
    return 0;
}