#include<iostream>
using namespace std;

int main () {
    int t,x=0,y=0,z=0;
    cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        x+=a;
        y+=b;
        z+=c;
    }
    if (x == 0 && y == 0 && z == 0) cout << "YES";
    else cout << "NO";
    return 0;
}