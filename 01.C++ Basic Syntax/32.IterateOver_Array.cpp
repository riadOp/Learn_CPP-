#include<iostream>

int main(){
    std::string Hello [] = {"Hello","HelloHello","HelloHelloHello"};
    int size = sizeof(Hello)/sizeof(Hello[0]);
    for(int i = 0; i<size;i++){
        std::cout << "Element " << i+1 <<": " <<Hello[i]<<'\n';
    }
    return 0;
}