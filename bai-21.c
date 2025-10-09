#include <stdio.h>
int main () {
    long long a,b,k;
    scanf("%lld %lld %lld", &a,&b,&k);
    long long p = 1ll * (k+1)/2;
    long long t = 1ll * k/2;
    long long v = 1ll * (p * a) - (t * b);
    printf("%lld", v);
}

