#include <iostream>
using namespace std;

int main () {
    long long int i,temp,sum = 0, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> temp;
        sum +=temp;
    }
    long long int sum1 = sum;
    for (i = 0; i < n-1; i++) {
        cin >> temp;
        sum1 -=temp;
    }
    long long int sum2 = sum;
    for (i = 0; i < n-2; i++) {
        cin >> temp;
        sum2 -=temp;
    }
    cout << sum1 << endl << sum2-sum1 << endl;
    return 0;
}