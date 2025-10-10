#include <stdio.h>
#include <math.h>

int main() {
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    // Tìm số lớn nhất 
    long long biggest = a;
    if (b > biggest) biggest = b;
    if (c > biggest) biggest = c;
    if (d > biggest) biggest = d;
    // Tìm số nhỏ nhất
    long long smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    if (d < smallest) smallest = d;  

    printf("%lld %lld", biggest, smallest);
}