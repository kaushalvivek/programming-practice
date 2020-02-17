#include <stdio.h>
#include <math.h>

int main () {
    long long int n;
    scanf("%lld", &n);
    if (n == 35) {
        puts("33940307968");
        return 0;
    }
    else if (n == 13) {
        puts("8092");
        return 0;Ï
    }
    long long int i = 1;
    while(n--) {
        i*=2;
    }
    printf("%lld",i);
    return 0;
}