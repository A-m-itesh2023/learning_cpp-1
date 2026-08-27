#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main() {
    /*typedef = reserved keyword used to create an additional name
    for example: typedef int MyInt; for another datatype.
    New identifier for an existing type
    Helps with readabiity and reduces typos
    */
    /*typedef int MyInt;
    MyInt x = 5;
    std::cout << x << std::endl;
    return 0;*/
    pairlist_t pairlist;
    number_t age = 18;

    text_t firstName = "Amitesh";
    std::cout << firstName<< '\n';
    std::cout << age << '\n';

    //Replaced with "using:" (work better w/ templates)


}