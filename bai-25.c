#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long count = 0; // Khởi tạo biến đếm 
    // Ưu tiên tờ 100: cộng số tờ 100 vào tổng, giữ lại phần dư để đổi mệnh giá nhỏ hơn
    count = count + n / 100;  
    n = n % 100; 
    // Lặp lại cho 20, 10, 5; phần còn lại là tờ 1
    count = count + n / 20;  
    n = n % 20; 
    count = count + n / 10; 
    n = n % 10; 
    count = count + n / 5; 
    n = n % 5;
    // Phần dư cuối cùng chính là số tờ mệnh giá 1
    count = count + n; 
    printf("%lld", count);
}