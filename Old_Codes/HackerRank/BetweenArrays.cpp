//Vivek Kaushal
//BetweenSets

#include <iostream>
using namespace std;

int fact (long long int A[], long long int n, long long int t) {
    long long int i;
    for (i = 0; i < n; i++)
        if (t % A[i] != 0) return 0;
    return 1;
}

int mult (long long int A[], long long int n, long long int t) {
    long long int i;
    for (i = 0; i < n; i++)
        if (A[i] % t != 0) return 0;
    return 1;
}


int main () {
    long long int a,b,i,maxa = -1, minb = 100000009;
    cin >> a >> b;
    long long int A[a], B[b];
    for (i = 0; i < a; i++) {
        cin >> A[i];
        if (A[i] > maxa) maxa = A[i];
    }
    for (i = 0; i < b; i++) {
        cin >> B[i];
        if (B[i] < minb) minb = B[i];
    }
    long long int count = 0;
    for (i = maxa;i <= minb; i++){
        if (fact(A,a,i) && mult(B,b,i)) count++;
    }
    cout << count;
    return 0;
}