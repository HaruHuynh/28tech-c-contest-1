#include <stdio.h>
#include <math.h>

int main() {
    long long k2,k3,k5,k6;
    scanf("%lld%lld%lld%lld", &k2,&k3,&k5,&k6);
    long long k256 = fmin((double)k2, fmin((double)k5, (double)k6));
    k2 -= k256;
    long long k32 = fmin((double)k2, (double)k3);

    long long total = k256 * 256 + k32 * 32;
    printf("%lld\n", total);
    return 0;
    // long long k256 = k2;
    // if (k5 < k256) k256 = k5;
    // if (k6 < k256) k256 = k6;

    // k2 -= k256;
    // long long k32 = k2 < k3 ? k2 : k3;

    // long long total = k256 * 256 + k32 * 32;
    // printf("%lld\n", total);
    // return 0;
}