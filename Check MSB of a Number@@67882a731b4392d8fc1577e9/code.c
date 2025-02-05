#include <stdio.h>

int main(){
    int a;
    int i = 32;
    int mask = 1<<(i-1);
    if (a & mask){
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}