#include <iostream>

int main(){
    /*int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age>=18){
        std::cout << "You are eligible to vote!"<< '\n';
    }
    else{
        std::cout << "You are not eligible to vote!"<< '\n';
    }

    return 0;*/
    int age;
    std::cout << "Enter your age "<<'\n';
    std::cin >> age;
    if (age>=100){
        std::cout<< "You are too old to enter the site";
    }
    else if (age>=18){
        std::cout<<"Welcome to the site";
    }
    else if(age<0){
        std::cout<<"Wrong info entered";
    }
    else{
        std::cout <<"You are not old enough to enter";
    }
    

    return 0;
}