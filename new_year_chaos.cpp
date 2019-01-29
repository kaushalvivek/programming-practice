#include <bits/stdc++.h>

using namespace std;

int main () {
    
    int i,t;
    cin >> t;
    
    for (i=0;i < t; i++) {
        
        int n;
        cin >> n;
        
        int j,arr[n];
        for (j=0;j<n;j++) cin >> arr[j];

        int flag,swaps = 0;
        for (j = 0; j < n; j++) {
            flag = 0;
            int diff = arr[j] - j - 1; 
            if (diff > 2) {
                flag = 1;
                
                break;
            }
            else if (diff > 0) swaps+=diff;
        }

        if (flag == 1) cout << "Too chaotic\n";
        else cout << swaps << "\n";
    }
    return 0;
}   