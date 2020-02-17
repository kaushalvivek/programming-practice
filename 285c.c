#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long int comp (const void* a,const void* b) {
    const long long int *ia = (const long long int *)a; 
    const long long int *ib = (const long long int *)b;
    return *ia  - *ib; 
}

int main () {
    long long int n;
    scanf("%lld", &n);
    long long int ans=0,i,A[n];
    for (i = 0; i < n; i++) scanf("%lld", &A[i]);
    qsort ((void*)A, n, sizeof(A[0]), comp);
    // for (i = 0; i < n; i++) printf("%lld ", A[i]);
    // puts("");
    for (i = 0; i < n; i++) {
        ans+=abs(A[i]-i-1);
        // printf("%lld ", ans);
    }
    // puts("");
    printf("%lld\n", ans);
    return 0;
}
