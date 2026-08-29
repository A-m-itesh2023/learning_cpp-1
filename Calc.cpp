#include <iostream>
#include <iomanip>

int main() {
    char op;
    double num1;
    double num2;
    double result;
    
    std::cout << "*************** CALCULATOR ***************"<< '\n';

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std:: cout << "Enter the value of num1" << '\n';
    std::cin >> num1;

    std:: cout << "Enter the value of num2" << '\n';
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 +num2;
            std::cout << std::setprecision(20);
            std::cout << "Result: "<< result<< '\n';
            break;
        case '-':
            result = num1 -num2;
            std::cout << std::setprecision(20);
            std::cout << "Result: "<< result<< '\n';
            break;
        case '*':
            result = num1*num2;
            std::cout << std::setprecision(20);
            std::cout << "Result: "<< result<< '\n';
            break;
        case '/':
            result = num1/num2;
            std::cout << std::setprecision(20);
            std::cout << "Result: "<< result<< '\n';
            break;
        default:
            std::cout << "That wasn't a valid response"<< '\n';
            break;



    }



    std::cout << "******************************************";


    return 0;
}