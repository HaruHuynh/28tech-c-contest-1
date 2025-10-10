#include <stdio.h>

int main() {
    // Cách 1
    int n,u1,d;
    scanf("%d%d%d", &n,&u1,&d);
    long long un = u1 + 1ll * (n-1) * d;
    long long S = n * (u1 + un) / 2;
    printf("%lld", S);
    return 0;
    // Cách 2
    // long long n, u1, d;
    // scanf("%lld %lld %lld", &n, &u1, &d);
    // Công thức tính tổng các phần tử của cấp số cộng
    // long long Sn =  n * (2*u1 + (n - 1) * d) / 2;
    // printf("%lld", Sn);
}