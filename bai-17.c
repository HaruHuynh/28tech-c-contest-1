#include <stdio.h>

int main()
{
    char kitu;
    scanf("%c", &kitu);
        if(kitu >= 65 && kitu <= 90){
            printf("UPPER");
        }else if(kitu >= 97 && kitu <= 122){
            printf("LOWER");
        }else if(kitu >= 48 && kitu <= 57){
            printf("DIGIT");
        }else{
            printf("SPECIAL");
        }
    return 0;
}
