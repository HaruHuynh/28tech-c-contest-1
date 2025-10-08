#include <stdio.h>

int main () {
    long long n,a,b;
    scanf("%lld %lld %lld", &n, &a, &b);
    if (n>=1 && a >= 1 && b <= 1000) {
        long long cost = 0;
        if (2*a <= b) {
            cost = n * a;
            printf("%lld\n", cost);
        } else {
            cost = (n/2) * b + (n%2) * a;
            printf("%lld\n", cost);
        }
    }
}
