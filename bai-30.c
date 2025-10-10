#include <stdio.h>
int main () {
    long long n;
    scanf("%lld", &n);
    // Công thức tổ hợp chập 2 của N
    long long c2 = n * (n-1)/2;
    printf("%lld", c2);
}
