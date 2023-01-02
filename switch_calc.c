#include <stdio.h>

int main(){

    double num1;
    double num2;
    char op;

    printf("Enter first number");
    scanf("%f", &num1);
    printf("enter operator");
    scanf(" %c", &op);
    printf("Enter second number");
    scanf("%f", &num2);

    switch(op){
        case '+' :
            printf("%f", num1 + num2);
            break;
        case '-' :
            printf("%f", num1 - num2);
            break;
        default :
        printf("invalid");
    }


    return 0;
}