#include <stdio.h>
#include <stdint.h>
#include <math.h>

float addidtion(float x, float y){
    return x + y;
}

float subtraction(float x, float y){
    return x - y;
}

float multiplication(float x, float y){
    return x * y;
}

float division(float x, float y){
    if(y == 0){
        printf("Error: Can not divide by zero");
    }
    return x / y;
}

static enum arithmetic {
    ADD = '+',
    SUB = '-',
    MULT = '*',
    DIV = '/'
}arithmetic = ADD;

int main(){
    float num1, num2, result;
    char what_arithmetic;

    printf("Enter first number: "); 

    float store_num1 = scanf("%f", &num1);
    if(store_num1 != 1){
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter arithmetic: "); scanf( " %c",&what_arithmetic);


    printf("Enter second number: "); 
    
    float store_num2 = scanf("%f", &num2);
    if(store_num2 != 1){
        printf("Invalid input num 2\n");
        return 1;
    }

    arithmetic = what_arithmetic;

    switch (arithmetic)
    {
    case ADD:
        result = addidtion(num1, num2);
        printf("Result is %2.f\n", result);
        break;

    case SUB:
        result = subtraction(num1, num2);
        printf("Result is %2.f\n", result);
        break;

    case MULT:
        result = multiplication(num1, num2);
        printf("Result is %2.f\n", result);
        break;

    case DIV:
        result = division(num1, num2);
        printf("Result is %2.f\n", result);
        break;
    
    default:
        printf("Wrong arithmetic");
        break;
    }
    return 0;

}
