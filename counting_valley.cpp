#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int level = 0;
    int lev_old = 0;

    int valley =0;
    for(int i=0;i < n;i++){
        lev_old = level;
        
        if (s[i]=='U') level++;
        else level--;

        if ((level == 0)&& (lev_old < 0)) valley++;
    }

    cout << valley;
    return 0;
}