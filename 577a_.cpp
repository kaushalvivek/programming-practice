#include<iostream>
#include <cmath>
using namespace std;


int factors(int limit, int n) {
    int i,j,f = 0;
    for (i = 1;i <=n && i <= limit; i++)
        for(j= i+1; j <=n && j <= limit; j++) {
            if(i*j == n) f++;
        }
    return f;
}

int main () {
    int size, n;
    cin >> size >> n;
    int f = factors(size,n);
    cout << 2*f;
    return 0;
}