#include <stdio.h>
#include <stdlib.h>

int comp (const void* a, const void* b) {
    const int *ai = (const int*)a;
    const int *bi = (const int*)b;
    return (*ai - *bi);
}


int main () {
    int i,n = 0;
    double ans = 0;
    const double pi = 3.1415926536;
    scanf("%d", &n);
    int A[n];
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    qsort((void*)A, n, sizeof(A[0]), comp);
    
    for (i = n-1; i > -1; i--) {
        if ((n-1-i) % 2 == 0) {
            ans+= pi*A[i]*A[i];
        }
        else
            ans-=pi*A[i]*A[i];
    }
    printf("%lf", ans);
    return 0;
}