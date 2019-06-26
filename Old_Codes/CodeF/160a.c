#include<stdio.h>
#include <stdlib.h>
int comp (const void* a, const void*b) {
    const int * ai= (const int*) a;
    const int * bi= (const int*) b;
    return (*ai-*bi);
}

int main () {
    int n,sum=0,count=0,sum1 = 0;
    scanf("%d", &n);
    int s = n;
    int A[n];
    while(n--) {
        scanf("%d", &A[n]);
        sum+=A[n];
    }
    qsort((void*)A, s, sizeof(A[0]), comp);
    n = s;
    while(n--){
        if (sum<sum1) break;
        count++;
        sum-=A[n];
        sum1+=A[n];
    }
    printf("%d", count);
    return 0;
}