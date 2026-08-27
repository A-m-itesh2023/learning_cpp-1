#include <iostream>

//cout << insertion operator
// cin >> extraction operator

int main() {
    std::string name;
    int age;
    std::string fname;  
    std::cout << "What's your name? ";
    std::cin  >> name;
    std::cin.ignore();
    //for string with spacesss
    std::cout << "What's your full name?  ";
    std::getline(std::cin, fname); 
    std::string branch;
    std::cout << "What is your branch? ";
    std::getline(std::cin>>std::ws, branch);

    int year;
    std::cout <<"What is your year of study? ";
    std::cin >> year;

    std::string college;
    std::cout << "What is your college name? ";
    std::getline(std::cin >> std::ws, college);
    

    std::cout << "What's your age? ";
    std::cin >> age;

   
    std::cout<<"Hello "<< name << '\n';
    std::cout << "You are "<< age << " years old" << '\n';
    std::cout << "Your full name is: " << fname << '\n';
    std::cout << "Your year of study is: " << year << '\n';
    std::cout << "Your branch is: " << branch << '\n';
    std::cout << "Your college name is: " << college << '\n';
    return 0;
}