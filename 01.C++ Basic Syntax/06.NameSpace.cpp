#include<iostream>

namespace first {
    int a = 10;
}

namespace second{
    int a = 15; 
}

int main(){
    using namespace first;
    std::cout <<"Value of a at First namespace : " << first::a << '\n';
    std::cout <<"Value of a at Second namespace :" << second::a << '\n';
    std::cout <<"for Using a namespace at main function : " << a;
    return 0;
}