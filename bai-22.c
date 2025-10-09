#include <stdio.h>
int main() {
    long long n,s;
    scanf("%lld %lld", &n, &s);
    long long coin = s / n;
    if (s % n != 0) {
        coin = coin + 1;
    }
    printf("%lld", coin);
}