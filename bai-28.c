#include <stdio.h>

int main() {
    long long n, u1, d;
    scanf("%lld %lld %lld", &n, &u1, &d);

    // Công thức tính tổng các phần tử của cấp số cộng
    long long Sn =  n * (2*u1 + (n - 1) * d) / 2;;
    printf("%lld", Sn);
}