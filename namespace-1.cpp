#include <iostream>

void namespaces() {
    using std::cout;
    using std::string;
    string name = "Amitesh";

    cout<< "Hello "<< name << '\n';
}


int main() {
    using namespace std; //no need to include std:: before cout and endl
    string name = "Bro";
    cout << "Hello, " << name << '\n';

    namespaces();

    return 0;




}