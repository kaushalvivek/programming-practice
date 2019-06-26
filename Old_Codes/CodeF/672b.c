#include <stdio.h>
#include <string.h>

int main () {
    int i,n,count=0;
    scanf ("%d",&n);
    if(n > 26) {
        puts("-1");
        return 0;
    }
    char s[n+1];
    scanf("%s", s);
    int A[26] = {0};
    for (i = 0; i < n; i++) {
        if(A[s[i]-97] > 0)
            count++;
        A[s[i]-97]++;
    }
    printf("%d\n",count);
    return 0;
}
