#include <stdio.h>

int main(){
    signed int a;
    signed int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a<=0 && b<=0){
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}