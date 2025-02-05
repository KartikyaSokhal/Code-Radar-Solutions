#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    
    int bit = (num >> n) & 1;
    printf("The %dth bit of %d is %d\n", n, num, bit);
    
    return 0;
}
