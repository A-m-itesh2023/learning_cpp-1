#include <iostream>

int main() { 

    int x; //declaration
    x = 5; //assignment

    //or
    int y=6;

    int z=6;
    int sum=y+z;

    std::cout << x<< '\n'; 
    std::cout << y<< '\n'; 
    std::cout <<z<< '\n';
    std::cout << sum<< '\n';


    //integer (whole number)
    int age = 18;
    int year= 2026;
    int days = 7;

    int days1 = 8.5;
    int days2 = 8.7;

    std::cout << "Age: " << age<< '\n';
    std::cout << "Year: " << year<< '\n';
    std::cout << "Days: " << days<< '\n';
    std::cout<< "Days1: "<<days1<< '\n';
    std::cout<< "Days2: "<<days2<< '\n';

    //double (number including decimal)
    double price = 10.99;
    double cgpa= 9.9;
    double temperature = 39.7;

    std::cout <<price << '\n';
    std::cout <<cgpa << '\n';
    std::cout <<temperature << '\n';
    
    //single character
    char grade= 'A';
    char initial ='B';

    std::cout << initial;
    //char only stores a single character, if you try
    //   to store more than one character it will give an error


    //boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale= false;

    //string (object that represents a sequence of text)
    std::string name =  "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "New Delhi";

    std::cout << "Hello "<< name << '\n';
    std::cout << "I am  " << age << " years old" << '\n';


    return 0;

    

}