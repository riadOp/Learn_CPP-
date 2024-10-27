#include<iostream>

int main(){
    int age = 10 ; // Integer Data Type
    double b = 3.67; // Decimal Data Type
    char c = '#'; // Character Data Type (Store a single Chracter)
    std::string name = "Riad Islam" ; //store text
    bool T_F = true; // True of false Value

    std::cout <<"Integer = " << age <<'\n';
    std::cout <<"Decimal = " << b <<'\n';
    std::cout <<"Charcter = " << c <<'\n';
    std::cout << "String = " << name <<'\n';
    std::cout << "Boolean = " <<T_F << '\n';

    std::cout <<"Hello" <<" " << name <<'\n';
    std::cout << "You are " << age << " Years Old";

    return 0;
}