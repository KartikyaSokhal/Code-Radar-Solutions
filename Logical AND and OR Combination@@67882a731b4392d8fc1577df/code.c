#include <stdio.h>

int main(){
    signed int a;
    signed int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>0 && b<0 || a==0 && b==0) {
        print("True");
    } else {
        printf("False");
    }
    return 0;
}