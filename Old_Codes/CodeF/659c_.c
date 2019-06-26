#include <stdio.h>

int main () {
    long long int n, m, temp, mark,count = 0, sum = 0;
    scanf("%lld%lld", &n, &m);
    long long int i,A[2000000000]={0};
    for(i = 0; i < n; i++) {
        scanf("%lld", &temp);
        A[temp] = 1;
    }
    for(i = 0; ; i++)    {Ï
        if (A[i] == 0) {
            sum+=A[i];
            if (sum > m) {
                mark = i;
                break;
            }
            count++;
            A[i] = -1;
        }
    }
    printf("%lld\n", count);
    for (i = 1; i < mark; i++) {
        if (A[i] == -1)
        printf("%lld ", i);
    }
    puts("");
    return 0;
}