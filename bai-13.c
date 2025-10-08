#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N > 0) {
        int y;
        y = N / 365;
        int du = N % 365;
        int w = du / 7;
        int d = du % 7;
        printf("%d %d %d\n", y, w, d);
    }else{
        printf("INVALID\n");
    }
    return 0;

}
