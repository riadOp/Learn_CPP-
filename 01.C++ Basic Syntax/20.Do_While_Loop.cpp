#include<iostream>

int main(){
    int num;
    do{
        std::cout << " You are in a Do While Loop \n";
        std::cout << "Enter a negative number to exit : ";
        std::cin >> num ;
    }while(num>0);
    return 0;
}