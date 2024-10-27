#include<iostream>

int main(){
    int *pointer = nullptr;
    int x = 10;
    pointer = &x;

    if(pointer==nullptr){
        std::cout <<"Ponter is not assigned" <<'\n';
    }else{
        std::cout <<"Value is assigned\n";
        std::cout <<"Value :" <<*pointer;
    }
    return 0;
}