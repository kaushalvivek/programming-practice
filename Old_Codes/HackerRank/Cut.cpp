// Vivek Kaushal
// Cut The Stick

#include <iostream>
using namespace std;

long long int selectMin (long long int A[], long long int n);
void update (long long int A[], long long int n, long long int min);
int check (long long int A[], long long int n);

int main () {
    long long int n;
    cin >> n;
    long long int A[n],i,count = 0;
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++)
        cout << A[i];
    while (1) {
        count++;
        long long int min = selectMin(A,n);
        update (A,n,min);
        int a = check (A,n);
        if (a) break;
    }
    cout << count;
    return 0;
}

long long int selectMin (long long int A[], long long int n) {
    long long int temp = A[0],i;
    for (i = 0; i < n; i++) {
        if (A[i] != 0 && A[i] < temp) temp = A[i];
    }
    return temp;
}

void update (long long int A[], long long int n, long long int min) {
    long long int i;
    for (i = 0; i < n; i++)
        if (A[i] != 0) A[i]-=min;
}

int check (long long int A[], long long int n) {
    long long int i;
    for (i = 0; i < n; i++)
        if (A[i] > 0) return 0;
    return 1;
}