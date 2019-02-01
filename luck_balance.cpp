#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k,i, luck = 0;
    cin >> n >> k;
    int cont[n];
    int rat[n];
    for (i = 0; i < n; i++) 
        cin >> cont[i] >> rat[i];
    
    int imp_count = 0;

    int imp[n];
    for (i=0; i < n; i++) {
        if (rat[i] == 1 ) {
            imp[i] = cont[i];
            imp_count++;
        }
        else {
            imp[i] = -1;
            luck += cont[i];
        }
    }

    sort (imp, imp+n);

    for (i = n-1; i >= n-imp_count; i--) {
        k--;
        if (k >= 0) 
            luck +=imp[i];
        else
            luck-=imp[i];
    }
    cout << luck;
    return 0;
}