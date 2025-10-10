#include <stdio.h>

int main() {
    // Cách 1
    int a,b,c,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int cb;
    if (b % a == 0){
        cb = b / a;
        if (b * cb == c && c * cb == d) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
    }else{
        printf("NO\n");
    }
    return 0;

    // // Cách 2
    // long long a,b,c,d;
    // scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    // // Kiểm tra nếu a,b,c,d = 0 thì đúng
    // // Nếu không trả về sai
    // if(a == 0 && b == 0 && c == 0 && d == 0){
    //     printf("YES");
    //     return 0;
    // // Kiểm tra nếu b chia hết cho a, c chia hết cho b và d chia hết cho c
    // // Vì phải là công bội nguyên, nên nếu đúng => xét công thức công bội lần lượt là r1,r2,r3
    // // Nếu r1,r2,r3 bằng nhau thì tạo thành đúng 1 cấp số nhân
    // }else if (b % a == 0 && c % b == 0 && d % c == 0) {
    //     long long r1 = b / a; 
    //     long long r2 = c / b; 
    //     long long r3 = d / c; 
    //     if (r1 == r2 && r2 == r3){
    //         printf("YES");
    //     }else {
    //         printf("NO");
    //         return 0;
    //     }
    // }else{
    //     printf("NO");
    //     return 0;
    // }
}