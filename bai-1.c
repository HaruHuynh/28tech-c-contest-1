#include <stdio.h>
#include <math.h>

int main() {
    int x;
    scanf("%d", &x);
    long long res = 1ll * x * x * x + 3ll * x * x + x + 1;
    // long long res = (long long)pow(x, 3) + 3ll * (long long)pow(x, 2) + x + 1;
    printf("%lld\n", res);
}
