#include <stdio.h>
int main () {
    // long long a,b,k;
    // scanf("%lld %lld %lld", &a,&b,&k);
    // long long p = 1ll * (k+1)/2;
    // long long t = 1ll * k/2;
    // long long v = 1ll * (p * a) - (t * b);
    // printf("%lld", v);

    int a, b, k;
    scanf("%d%d%d", &a,&b,&k);
    int trai, phai;
    if (k % 2 == 0){
        trai = phai = k / 2;
    }else {
        trai = k / 2;
        phai = trai + 1;
    }
    printf("%lld", 1ll * phai * a - trai * b);
    return 0;
}

