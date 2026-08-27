#include <iostream>
#include <cmath> //for more maths functions
int main(){

    double x=4.77;
    double y=5.31;
    double z;

    //z= std::max(x,y);
    // z= std::min(x,y);
    //z=pow(2,3); //2^3
    //z=sqrt(16); //square root of 16
    //z=abs(-10); //absolute value of -10 //modulus operator
    //z=round(3.6); //rounds to nearest integer
    //z=round(3.51);
    //z=round(3.5);
    //z=floor(x); //rounds down to nearest integer
    z=ceil(x); //rounds up to nearest integer
    std::cout <<z;

}