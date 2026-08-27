#include <iostream>

int main() {
    /* type conversion = conversion of one data type to another
    implicit = automatic
    explicit = precede value with new data type (int) x
    */
    int x = 3.14;
    std::cout << x << '\n';
    //automatically became just the integral part
    double int1=3.14;
    std::cout << int1 << '\n' ;

    double xx = (int) 3.14159;
    std::cout << xx << '\n';

    double price =99.99;
    int wholepart = (int)price;

    double money = 250.75;
    double itemPrice = 80.00;
    int items = (int)(money/itemPrice);

    std::cout << "The number of items which we can buy is  "<< items << '\n';
    char x3 =100;
    std::cout << x3 << '\n';

    //another and easier way
    std::cout << (char) 100; //typecasting it nto char value so gives ASCII values
    int correct = 8;
    int questions = 10;
    double score = correct/questions*100;
    std::cout << "The score is: " << score << '%'<< '\n'; //gives 0 because correct/questions gives 0.8 but since both are int it gives 0  
    double score1 = correct/(double)questions*100;
    std::cout << "The score is: " << score1 << '%'<< '\n'; //gives 80 because correct/questions gives 0.8 but since both are int it gives 0
    return 0;

}