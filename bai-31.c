#include <stdio.h>
#include <math.h>
int main() {
    int a1,a2,a3,b1,b2,b3;
    int n;
    scanf("%d%d%d%d%d%d\n", &a1,&a2,&a3,&b1,&b2,&b3);
    scanf("%d", &n);
    // Tính tổng số cúp
    int cups = a1+a2+a3;
    // Tìm tổng kệ cúp (không > 5 cúp)
    int cup_shelves = ceil((double)cups/5);
    // Tính tổng huy chương
    int medals = b1+b2+b3;
    // Tìm tổng kệ huy chương (không > 10 huy chương)
    int medals_shelves = ceil((double)medals/10);
    // Tìm tổng kệ
    int total_shelves = cup_shelves + medals_shelves;
    if(total_shelves <= n) {
        printf("YES");
    }else{
        printf("NO");
    }
}