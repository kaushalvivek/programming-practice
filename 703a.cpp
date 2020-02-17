#include <iostream>
using namespace std;

int main () {
    long long int n;
    cin >> n;
    long long int m = 0, c = 0;
    while(n--) {
        long long int temp1, temp2;
        cin >> temp1 >> temp2;
        if (temp1 > temp2) m++;
        else if (temp1 < temp2) c++;
    }
    if (m > c) cout << "Mishka";
    else if (c > m) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}