#include <stdio.h>
#include <stdlib.h>

// Trick is to sum+= only when required.

int comp (const void* a, const void* b) {
    const long long int* ai = (const long long int*) a;
    const long long int* bi = (const long long int*) b;
    return *ai - *bi;
}

int main () {
    long long int n,sum = 0, count = 0;
    scanf ("%lld", &n);
    long long int i,A[n];
    for (i = 0; i < n; i++)
        scanf ("%lld", &A[i]);
    qsort((void*)A, n, sizeof(A[0]), comp);
    for (i = 0; i < n; i++) {
        if (sum <= A[i]) {
            count++;
            sum+=A[i];  // HERE
        }
    }
    printf("%lld", count);
    return 0;
}