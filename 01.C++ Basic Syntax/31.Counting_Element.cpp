#include<iostream>

int main(){
    std::string Hello [] = {"Hello","HelloHello","HelloHelloHello"};
    int arr[]={1,2,3,4,5};

    std::cout << "Type 1 String Element : "<< sizeof(Hello)/sizeof(std::string) <<'\n';
    std::cout <<"Type 2 Array Element : " << sizeof(arr)/sizeof(arr[0]);
    return 0;
}