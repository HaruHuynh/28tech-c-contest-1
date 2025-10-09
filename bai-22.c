#include <stdio.h>
int main() {
    // long long n,s;
    // scanf("%lld %lld", &n, &s);
    // long long coin = s / n;
    // if (s % n != 0) {
    //     coin = coin + 1;
    // }   
    // printf("%lld", coin);

    long long n,s;
    scanf("%lld %lld", &n, &s);
    if (s % n == 0){
        printf("%lld", s/n);
    }else{
        printf("%lld", s/n+1);
    }
    return 0;
}