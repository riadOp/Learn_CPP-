#include<iostream>

int num = 07 ; // Global Variable 

int main(){
    int num = 10; // Local Variable

    std::cout << "Local Variable : " << num  <<'\n';
    std::cout <<"Global Variable : " <<::num  <<'\n';
    return 0;
}