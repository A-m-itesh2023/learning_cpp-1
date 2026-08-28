#include <iostream>

int main(){

    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did ok";
            break;
        case 'D':
            std::cout << "You did not do great";
            break;
        case 'F':
            std::cout << "You failed";
            break; 
        default:
            std::cout << "Please enter in a letter grade only  (A-F)";
    }



    return 0;
}
