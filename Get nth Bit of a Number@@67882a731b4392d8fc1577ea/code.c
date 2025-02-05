#include <stdio.h>

int main() {
    int num, n;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the bit position (0-based index): ");
    scanf("%d", &n);
    
    int bit = (num >> n) & 1;
    printf("The %dth bit of %d is %d\n", n, num, bit);
    
    return 0;
}
