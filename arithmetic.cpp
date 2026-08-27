#include <iostream>

int main() {
    /* Arithmetic operators return the result of specific 
    arithmetic operations (+,-,*, /) */
    int students = 20;
    //ways
    students=students+1;
    std::cout << students << '\n';

    int students1 =21;
    students1 +=1;
    std::cout << students1 << '\n';

    //another way
    students ++;
    std::cout << students << '\n'; //students value increases by 1


    students = students -1;
    students -=2;
    students --;
    std::cout << students << '\n';

    students = students*2;
    students*=2;
    std::cout << students << '\n';


    students = students /2;
    students/=2;
    std::cout << students << '\n';

    students/=5;
    std::cout << students << '\n'; //no decimal portion

    double students2 = 3;
    students2*=6;
    students2/=5;
    std::cout << students2 << '\n'; //decimal portion is included

    int remainder = students % 2;
    std::cout << remainder << '\n';

    int remainder1 = students % 3;
    std::cout << remainder1 << '\n';

    /* preference order---
    parentheses
    unary operators
    multiplication, division, modulus
    addition, subtraction
    */

    int students3 = 6 -5 +4 *3 / 2;
    std::cout << students3 << '\n';

    double students4 = 6 - (5 +4) *3 / 2;
    std::cout << students4 << '\n';

    return 0;
}