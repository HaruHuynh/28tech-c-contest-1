#include <stdio.h>

int main() {
   int a,b;
    scanf("%d %d", &a, &b);
    int x = (a/b) * b; // (x <= a && x : b == 0)
    int y;
    if (a % b == 0 ) { // Neu a la boi cua b
        y = a;
    }else{
        y = (a/b + 1) * b; // Neu a khong phai boi cua b => Lay boi ke tiep
    }
    printf("%d %d\n", x, y);
    return 0;
}
