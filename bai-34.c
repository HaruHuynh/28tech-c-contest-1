#include <stdio.h>

int main() {
    long long c1,c2,c3,c4,c5;
    scanf("%lld%lld%lld%lld%lld", &c1,&c2,&c3,&c4,&c5);

    long long tong = c1+c2+c3+c4+c5;
    if (tong == 0 || tong % 5 != 0) {
        printf("-1\n");
    } else {
        printf("%lld\n", tong / 5);
    }
}