#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float avg = (a+b+c)/3;
    printf("Average: %f\n", avg);
    return 0;
}