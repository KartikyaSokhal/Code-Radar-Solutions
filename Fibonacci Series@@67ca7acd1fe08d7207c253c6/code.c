int fibonacciSeries(int n){

    int a=0,b=1,c;

    if(n==1){

        printf("0");

    }

    else{

        printf("%d %d ", a,b);

        for(int I = 0; I<n; I++){

            c=a+b;

            a=b;

            b=c;

            printf("%d ",c);

        }

    }

}