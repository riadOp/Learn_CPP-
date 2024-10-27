#include<iostream>

int main(){
    std::string cars[] = {"Car1","Car2","Car3"};
    cars[2] = "Bike"; // Editing an array ;
    std::cout << cars[0] <<'\n';
    std::cout << cars[1] <<'\n';
    std::cout <<cars[2] ;
    return 0;
}