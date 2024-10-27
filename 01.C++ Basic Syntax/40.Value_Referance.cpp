#include<iostream>

void swap (std::string &x , std::string &y);

int main(){
    std::string A = "Siuuuuu";
    std::string B = "Jercy";

    swap(A,B);

    std::cout <<"A : " << A<<'\n';
    std::cout <<"B : " << B;
    return 0;
}

void swap (std::string &x , std::string &y){
    std::string temp = x;
    x = y ;
    y = temp;
}