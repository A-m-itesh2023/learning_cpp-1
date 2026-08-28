#include <iostream>
int main(){

    //switches :- Alternative to too many else if statements- compare one value against the oother


    /*int age;
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
    }*/
    
    int month;
    std::cout << "Enter the month you were born in No.s (1-12) "<< '\n';
    std::cin >>month;

    switch(month){
        case 1:
            std::cout << "January";
            break; 
        case 2:
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        default: //if there are no matching cases
            std::cout << "Please enter in only numbers from 1-12";

    }


    return 0;
}