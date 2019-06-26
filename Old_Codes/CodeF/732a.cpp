#include <iostream>
using namespace std;

int main () {
    int i,k,r,A[10];
    cin >> k >> r;
    k%=10;
    for (i = 0; i < 10; i++) A[i] = (k*(i+1))%10;
    for (i = 0; i < 10; i++) 
        if (r == A[i] || A[i] == 0) {
        cout << i+1 << endl;
        break;
    }
    return 0;
}