// Vivek Kaushal
// String Ops
// DID NOT COMPILE -- Ask Mridul Why
#include <iostream>
//#include <conio>
//#include <cstring>
#include <string>
using namespace std;

int main () {
    string a,b;
    cin >> a >> b;
    long long int change = 0,k;
    cin >> k;
    long long int i,alen, blen;
    alen = a.length();
    blen = b.length();
    long long int less = (alen>blen)? blen:alen;
    long long int more = (alen>blen)? alen:blen;
    for (i = 0; i < less; i++) {
        if (a[i] == b[i] && i != less-1) continue;
        if (a[i] == b[i]) {
            change+=(more-less);
            break;
        }
        change+=2*(less-i);
        change+=more - less;
    }
    if (change <= k)
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}