#include <iostream>
using namespace std;

int main () {
    long long int n;
    cin >> n;
    long long int i,count=0,temp,A[101] = {0};
    for (i = 0; i < n; i++) {
        cin >> temp;
        A[temp]++;
    }
    for (i = 0; i < n; i++) count+=(A[i]/2);
    cout << count;
    return 0;
}