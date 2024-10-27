#include<iostream>

int main(){
    std::string name ;
    std::cout << "Enter your name :";
    //std::cin >> name; ~~ Issue is cannot take input after space
    std::getline(std::cin >> std::ws ,name);
    std::cout << "Hello," << name <<"!\n";
    return 0;
}