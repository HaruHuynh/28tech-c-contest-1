#include <stdio.h>
int main () {
    // Cách 1 
    int n;
    scanf("%d", &n);
    long long res = 1ll * n * (n-1) / 2;
    printf("%lld", res);
    return 0;
    // // Cách 2
    // long long n;
    // scanf("%lld", &n);
    // // Công thức tổ hợp chập 2 của N
    // long long c2 = n * (n-1)/2;
    // printf("%lld", c2);
}
