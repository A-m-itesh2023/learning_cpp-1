#include <iostream>

int main() {
    //The const keyword is used to declare variables whose value cannot be changed after initialization.
    //tells the compiler to prevent anything from modifying it.
    //read only

    const double PI = 3.14159265358979; //change constants to uppercase
    double radius = 10;
    // double PI = 10.0; //error: redefinition of 'PI' as different kind of symbol
    double circumference = 2*PI*radius;
    const int LIGHT_SPEED = 299752458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    


    std::cout << "Circumference: " << circumference << " cm" << '\n';



    return 0;
}