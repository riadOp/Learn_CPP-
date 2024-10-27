#include<iostream>

int main(){
    int number;
    std::cout << "Enter a number : ";
    std::cin >> number;
    while(std::cin.fail()){
        std::cin.clear();
        fflush(stdin);
        std::cout<<"Invalid Input !\n";
        std::cout <<"Enter again = ";
        std::cin >> number;
    }
    std::cout << "Your number is = " << number <<std::endl;
    return 0;
}