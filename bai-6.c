#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
        // 1
       if(n % 2 == 0) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
        // 2
        if(n % 3 == 0 && n % 5 == 0) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
        // 3
        if(n % 3 == 0 && n % 7 != 0) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
        // 4
        if(n % 3 == 0 || n % 7 == 0) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
        // 5
        if(n > 30 && n < 50){
            printf("YES\n");
        }else {
            printf("NO\n");
        }
        // 6
        if(n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
        // 7
        int r = n % 10; // Kiểm tra chữ số cuố
        if(n >= 10 && n <= 99 && (r == 2 || r == 3 || r == 5 || r == 7)) {
            printf("YES\n");    
        }else {
            printf("NO\n");
        }
        // 8
        if (n <= 100 && n % 23 == 0){
            printf("YES\n");
        }else {
            printf("NO\n");
        }   
        // 9   
        if (n < 10 || n > 20){
            printf("YES\n");
        }else {
            printf("NO\n");
        }
        // 10
        int u = n % 10; // Kiểm tra chữ số cuố
        if (u % 3 == 0){
            printf("YES\n");  
        }else {
            printf("NO\n");
        }
        return 0;
}
