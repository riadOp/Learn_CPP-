#include<iostream>

void info (const std::string &a , const int &b);

int main(){
    std::string name = "QIQI";
    int age = 500 ;

    info(name,age);
    return 0;
}

void info (const std::string &a , const int &b){
    std::cout << a <<std::endl;
    std::cout <<b <<std::endl;
}