#include <iostream>

int main() {
    using namespace std;
    // ternary operator ?: = replacement of an if/else statement
    //condition ? expression1 : expression 2;

    /*int grade = 75;

    if (grade >=60){

        std::cout << "You pass! ";
    }
    else
    {
        std::cout << "You fail";
    } */
    
    /*int grade = 7;  // would be helpful for yes/no questions ig

    (grade >=60) ? std::cout << "You pass! ": std::cout << "You fail"<< endl;
    
    int number =8;
    number %2 ? std::cout << "ODD": std::cout  << "EVEN"; */

    bool hungry = true;

    // hungry ? std::cout << "You are hungry " : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    


}


