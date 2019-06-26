#include <iostream>
using namespace std;

int main () {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans = ((a|b)&(c^d))|((b&c)^(a|d));
    cout << ans << endl;
 Ï   return 0;
}

 int iter,t,dec = 0,rem, base=1;
    int l = s.size();
    for (iter = 0; iter < l; iter++) {
        if (s[l-iter-1] == '0') t = 0;
        else t = 1;
        dec+= base*t;
        base*=2;
        // cout << dec << endl;
    }
    int x = log2(dec);
    cout << x << endl;
    cout << dec << endl;