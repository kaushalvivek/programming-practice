//Vivek Kaushal
//Beautiful Numbers

#include <iostream>
#include <cmath>
using namespace std;

int beautiful (long long int n,long long int k) {
    long long int temp = n,i,j,len = 0;
    for (len = 0; temp != 0 ; temp/=10, len++);
    long long int A[len];
    temp = n;
    for (i = 0; i < len; i++) {
        A[i] = temp % 10;
        temp/=10;
    }
    temp = 0;
    for (i = 0; i < len; i++) {
        temp += A[len - i - 1] * pow(10,i);
    }
    if (abs(temp-n) % k == 0) return 1;
    return 0;
}


int main () {
    long long int n,i,m,k,count = 0;
    cin >> m >> n >> k;
    for (i = m; i <= n; i++) {
        if (beautiful(i,k)) count++;
    }
    cout << count;
    return 0;
}