#include <stdio.h>
#include <math.h>
int main () {
    int n;
    scanf ("%lld", &n);
    long long int A[n],min[n],max[n],j,i;
    for (i = 0; i < n; i++) {
        scanf("%lld", &A[i]);
        min[n] = 50000000000;
        max[n] = 0;
    }
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (abs(A[i]-A[j])>max[i]) max[i] = abs(A[i]-A[j]);
            if (abs(A[i]-A[j])<min[i]) min[i] = abs(A[i]-A[j]);
        }
    }
    for (i = 0; i < n; i++)
        printf("%lld %lld\n", min[i], max[i]);
    return 0;
}
