#include <stdio.h>

int main()
{
    char kitu;
    scanf("%c", &kitu);
        if(kitu >= 65 && kitu <= 90){
            kitu += 32;
            printf("%c", kitu);
        }else if(kitu >= 97 && kitu <= 122){
            kitu -= 32;
            printf("%c", kitu);
        }else{
            printf("%c", kitu);
        }
    return 0;
}
