//Vivek Kaushal
// Clouds, Revisited

#include <iostream>
using namespace std;

int main () {
    int n, k, E =100;
    cin >> n >> k;
    int temp = 0,i,A[n];
    
    for (i = 0; i < n; i++)
        cin >> A[i];
    while (1) {
        temp = (temp+k)%n;
        if (A[temp] == 1) E-=2;
        E--;
        if (temp == 0) break;   
    }
    cout << E;
    return 0;
}