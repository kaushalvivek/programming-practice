#include<iostream>
using namespace std;

int main () {
   long long int temp,n,m,ans = 0,pos;
    cin >> n >> m >> temp;
    ans+=temp-1;
    m--;
    pos = temp;
    while (m--) {
        cin >> temp;
        if (temp == pos) continue;
        else if (temp > pos) {
            ans+=temp-pos;
            pos = temp;
        }
        else {
            ans+=(n-(pos-temp));
            pos = temp;
        }
    }
    cout << ans;
    return 0;
}