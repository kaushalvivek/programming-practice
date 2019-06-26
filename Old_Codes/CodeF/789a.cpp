#include <iostream>
using namespace std;

int main () {
    int sum=0,temp,n,r;
    cin >> n >> r;
    while(n--) {
        cin >> temp;
        temp = (temp%r == 0)?temp/r:temp/r + 1;
        sum+=temp;
    }
    sum = (sum%2 == 0)?sum/2:sum/2 + 1;
    cout << sum << endl;
    return 0;
}