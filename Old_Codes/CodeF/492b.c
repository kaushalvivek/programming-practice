#include <stdio.h>
#include <stdlib.h>

int comp (const void* a, const void* b) {
    const int* ai = (const int*)a;
    const int* bi = (const int*)b;
    return *ai - *bi;
}

int main () {
    int i,n, max, diff = 0;;
    scanf("%d%d", &n, &max);
    int A[n];
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    qsort((void*)A, sizeof(A)/sizeof(A[0]), sizeof(A[0]), comp);
    
    // for (i = 0; i < n; i++) printf("%d ", A[i]); puts("");
    
    diff = 2*A[0];
    if (2*(max - A[n-1]) > diff) diff = 2*(max - A[n-1]);
    for (i = 0; i < n-1; i++)
        if (A[i+1]-A[i] > diff) diff = A[i+1] - A[i];
    double x = (double) diff/2;
    printf("%lf",x);
    return 0; 
}