#include <stdio.h>

int main () {
    int n,count = 0;
    scanf("%d",&n);
    while(n > 0) {
        count++;
        n = n & (n-1);
    }
    printf("%d", count);
    return 0;
}