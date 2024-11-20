#include<stdio.h>

int main(){
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf\n", first, second, first + second);
        break;
    case '-':
        printf("%lf - %lf = %lf\n", first, second, first - second);
        break;
    case '*':
        printf("%lf * %lf = %lf\n", first, second, first * second);
        break;
    case '/':
        if (second != 0.0)
            printf("%lf / %lf = %lf\n", first, second, first / second);
        else
            printf("Error! Division by zero.\n");
        break;    ;
    
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
