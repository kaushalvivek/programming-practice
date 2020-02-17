//Vivek Kaushal
// Digits

#include <iostream>
using namespace std;

int main () {
    long long int times;
    cin >> times;
    while (times--) {
        long long int temp,i,n, count = 0;
        cin >> n;
        temp = n;
        long long int A[12];
        for (i = 0; i < 12; i++) {
            A[i] = temp%10;
            temp/= 10; 
        }
        for (i = 0; i < 12; i++) {
            if (A[i] != 0)
                if (n % A[i] == 0) count++;
        } 
        cout << count << endl;  
    }
    return 0;
}