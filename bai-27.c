#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);
    // round sẽ làm tròn về số nguyên gần nhất; 
    // nếu a nằm đúng giữa hai số nguyên (ví dụ 2.5), hàm này làm tròn về số chẵn gần nhất (2.5 → 2, 3.5 → 4). 
    long long rounded = (long long)round(a);
    printf("%lld", rounded);
}