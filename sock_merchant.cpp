#include <bits/stdc++.h>

using namespace std;

int main() {
    int bucket[100];
    for (int i=0; i < 100; i++) bucket[i]=0;
    int n;

    cin >> n;

    int k, count=0;

    for(int i=0; i < n; i++){
        cin >> k;
        bucket[k-1]++;
    }

    for(int i=0; i < 100;i++){
        count+=bucket[i]/2;
    }

    cout << count;

}
