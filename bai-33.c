#include <stdio.h>

int main() {
    long long a,b,c,n;
    scanf("%lld%lld%lld%lld", &a,&b,&c,&n);

    long long tong = a+b+c+n;
    if(tong % 3 == 0){
        long long target = tong / 3;
        if(target >= a && target >= b && target >= c){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
    
}