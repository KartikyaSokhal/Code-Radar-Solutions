#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    
    int bit = (num >> n) & 1;
    printf("%d", bit);
    
    return 0;
}
