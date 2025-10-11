#include <stdio.h>

int main() {
    int h,m;
    scanf("%d%d", &h, &m);

    int one_day = 24 * 60;
    if(h > 24 || m > 60){
        return 0;
        if(h < 0 || m < 0){
            return 0;
        }
    }
    printf("%d", one_day - ((h*60) + m));
}