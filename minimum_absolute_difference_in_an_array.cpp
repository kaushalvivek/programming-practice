#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j;
    cin >> n;
    long int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    long int diff = 9000000000;
    for (i = 0; i < n; i++) {
        if (abs(arr[i]-arr[i-1]) < diff) diff = abs(arr[i]-arr[i-1]);
    }
    cout << diff;
    return 0;
}