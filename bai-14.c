#include <stdio.h>

int main() {
    float a,b,c,d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float tong;
    tong = (float) (a + b + c * 2 + d * 3) / 7;
    if(tong > 0 && tong <= 10){
        if(tong >= 8){
            printf("GIOI\n");
        }else if (tong >= 6.5 && tong < 8){
            printf("KHA\n");
        }else if (tong >= 5 && tong < 6.5){
            printf("TRUNG BINH\n");
        }else if (tong < 5){
            printf("YEU\n");
        }
    }
}
