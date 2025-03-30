void fibonacciSeries(int n, int a, int b){
    if (n==0){
        return; 

    } else {
        printf("%d",a);
        fibonacciSeries(n-1,b,a+b);
    }
}