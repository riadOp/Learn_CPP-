#include<iostream>

int main(){
    int num1 = 10 , num2 = 15;
    num1 > num2 ? std::cout <<"Num1 is bigger than num 2" : std::cout << "Num2 is bigger than num1\n";
    bool hungry = true;
    hungry ? std::cout << "Eat\n" : std::cout << "Donot Eat\n";
    //or
    std::cout << hungry? "eat\n":"Donot eat\n"; 
    return 0;
}