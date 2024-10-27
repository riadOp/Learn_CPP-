#include<iostream>

int main(){
    std::string name ;
    std::cout <<"Enter your name : ";
    std::getline(std::cin >> std::ws ,name);
    std::cout <<"Some Info:\n";

    std::cout <<"Lenth of String : " << name.length() << '\n';
    std::cout <<"Add something at end :" << name.append(" Ohio") <<'\n';
    std::cout <<"Character at 3rd index :" <<name.at(3) << '\n';
    std::cout <<"Changes in index 2 :" << name.insert(2,"N") <<'\n';
    std::cout <<"Find something in string :" <<name.find(2) <<'\n';
    return 0;
}