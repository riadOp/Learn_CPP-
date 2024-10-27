#include<iostream>

int main(){
    //Type Conversion ~ Conversion of Value From one data type to another data typel
    int number = 100;
    
    std::cout << "Implicit :" << number <<'\n'; // Implicit type conversion !!
    std::cout <<"Explicit : " << char(number) << '\n'; // Explicit type conversion !1 

    return 0;
}