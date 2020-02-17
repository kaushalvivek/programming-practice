#include <iostream>
using namespace std;

int test (int A[]) {
    int i,t = 0;
    for (i = 0; i < 1001; i++)
        if(A[i] >= 1) t = 1;
    return t;
}

int count (int A[]) {
    int i,c = 0;
    for (i = 0; i < 1001; i++)
        if(A[i] >= 1) c++;
    return c;
}

int main() {
    int A[1001] = {0},temp,n;
    cin >> n;
    int i, ans = 0;
    while (n--) {
        cin >> temp;
        A[temp]++;
    }
    while (test (A)){
        ans += count(A) - 1;
        for(i = 0;i < 1001 ;i++) {
            if (A[i] !=0) A[i]--;
        }
    }
    cout << ans << endl;
    return 0;
}