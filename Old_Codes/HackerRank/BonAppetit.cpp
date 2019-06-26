//Vivek Kaushal
// Bon Apetite
#include <iostream>
using namespace std;

double temp = 0.0;

int main () {
    long long int n,q,i;
    cin >> n >> q;
    double A[n];
    for (i = 0; i < n; i++) {
        cin >> A[i];
        if (i != q) temp+=A[i]/2;
    }
    
    double price;
    cin >> price;
    
    if (temp == price)
        cout << "Bon Appetit";
    else
        cout << price - temp;
    return 0;
}
