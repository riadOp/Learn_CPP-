#include<iostream>

int main(){
    int num;
    std::cout << "Enter a Number : ";
    std::cin >> num;
    while(num>100){
        std::cout << "Enter a number less than 100 !\n";
        std::cout << "Enter number again : ";
        std::cin >> num;
    }
    std::cout <<"Your final number is = " << num <<'\n';
    return 0;
}