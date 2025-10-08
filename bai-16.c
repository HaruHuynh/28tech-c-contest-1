#include <stdio.h>
int main()
{
    char kitu;
    scanf("%c", &kitu);
    if((kitu >= 'A' && kitu <= 'Z') || (kitu >= 'a' && kitu <= 'z')) {
        
        if(kitu >= 'a' && kitu <= 'z'){
            if(kitu == 'z'){
                kitu -= 25;
                printf("%c", kitu);
            }else{
                kitu += 1;
                printf("%c", kitu);
            }
        }
        else if(kitu == 'Z'){
            kitu += 7;
            printf("%c", kitu);
        }else{
            kitu += 33;
            printf("%c", kitu);
        }
    }
    return 0;
}
