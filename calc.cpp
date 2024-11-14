#include <iostream>

using namespace std;

float addition(float x, float y){
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
        cout << "Can not divide by zero" << endl;
    }
    return x / y;
}


int main(){
    float num1, num2, result;
    char what_arithmetic;

    cout << "Enter first number: ";
    cin >> num1;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 1;
    }

    cout << "Enter arithmetic: ";
    cin >> what_arithmetic;

    cout << "Enter second number: ";
    cin >> num2;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 1;
    }

    switch (what_arithmetic)
    {
    case '+':
        result = addition(num1, num2);
        cout << "Result is " << result << endl;
        break;
    
    case '-':
        result = subtraction(num1, num2);
        cout << "Result is " << result << endl;
        break;
    
    case '*':
        result = multiplication(num1, num2);
        cout << "Result is " << result << endl;
        break;

    case '/':
        result = division(num1, num2);
        if(num2 != 0){
            cout << "Result is " << result << endl;
            break;
        }else{
            cout << "Can not divide by zero!" << endl;
            break;
        }
    default:
        cout << "Invalid arithmetic" << endl;
        break;
    }
}