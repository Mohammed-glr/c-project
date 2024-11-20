#include <stdio.h>
double plus(double a, double b) {
    return a + b;
}


double minus(double a, double b){
    return a - b;
}
double divide(double a,double b){
    if (a == 0 || b ==0){
        return 0;
    }

    return a / b;

}
double times (double a ,double b){
    return a * b ;
}

int main(int argc, char* argv[]) {
    for (int i =0; i < 4; i++){
        printf("%s\n", argv[i]);
    }

    

    double keer = times(10,10);
    printf("%f\n",keer);

    double deel = divide(10,15);
    printf("%f\n", deel);

    double min = minus(0,0);
    printf("%f\n", min);

    double sum = plus(1, 65);
    printf("%f\n", sum);
    return 1;


}

