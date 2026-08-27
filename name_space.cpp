#include <iostream>
namespace first{
    int x =1;
}

namespace second{
    int x=2;
}
int main() {
    // Namespace = provides a solution for preventing name conflicts
    // in large projects. Each entity needs a unique name. If two entities have the same name, it will cause a conflict.
    // A namespace allows for identically named entities
    // as long as the namespaces are different.


    std::cout << second::x << '\n'; //2
    std::cout << first::x << '\n'; //1
    //scope resolution operator (::) = used to define the context in which a name is defined.
    //using namespaces 
    using namespace second;
    std::cout <<x;

    
    return 0;
}