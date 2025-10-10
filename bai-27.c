#include <stdio.h>
#include <math.h>

int main() {
    // Cách 1
    float a;
    scanf("%f", &a);
    int res = round(a);
    printf("%d", res);
    return 0;
    
    // Cách 2
    // double a;
    // scanf("%lf", &a);
    // // round sẽ làm tròn về số nguyên gần nhất; 
    // // nếu a nằm đúng giữa hai số nguyên (ví dụ 2.5), hàm này làm tròn về số chẵn gần nhất (2.5 → 2, 3.5 → 4). 
    // long long rounded = (long long)round(a);
    // printf("%lld", rounded);

}