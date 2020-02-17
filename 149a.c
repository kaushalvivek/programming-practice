#include <stdio.h>
#include <stdlib.h>

int comp (const void* a, const void* b) {
    const int* ai = (const int*) a;
    const int* bi = (const int*) b;
    return *ai-*bi;
}
int main () {
    int i, k, A[12],sum=0,ans=0,sum1 = 0;
    scanf("%d", &k);
    for (i = 0; i < 12; i++) {
        scanf ("%d", &A[i]);
        sum1+=A[i];
    }
    if (sum1 < k) {
        puts("-1");
        return 0;
    }
    // else if (sum1 == k) {
    //     puts("12");
    //     return 0;
    // }
    qsort((void*) A, 12, sizeof(int), comp);
    for(i = 11; i >=0; i--) {
        if (sum >= k) break;
        sum+=A[i];
        ans++;
    }
    printf("%d\n",ans);
    return 0;
}