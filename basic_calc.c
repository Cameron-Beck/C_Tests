#include <stdio.h>

int main(){
    double num1;
    double num2;

    printf("enter first number");
    scanf("%lf", &num1);
    printf("enter second number");
    scanf("%lf", &num2);

    printf("answer = %f", num1 + num2);
}