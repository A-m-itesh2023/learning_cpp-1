#include <iostream>
int main() {
    // && = check if two conditions are true
    // || =  check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;


    /*if(temp>0 && temp<30){

        std::cout << "The temperature is good";
    }

    else{
        std::cout << "The temperautre is bad";
    } */

    if(temp <=0 || temp >30){
        std::cout << "The temperature is bad \n";
    }
    else{
        std::cout << "The temperature is good \n";
    } 

    bool sunny=true;
    if (sunny){
        std::cout << "It is sunny outside";
    }
    else{
        std::cout << "It is cloudy outside!";
    }

    return 0;
}
