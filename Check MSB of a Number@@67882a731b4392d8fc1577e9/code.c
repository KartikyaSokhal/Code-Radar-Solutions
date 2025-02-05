#include <stdio.h>

int main(){
    int a;
    int i = 32;
    if (1<<(i-1)){
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}