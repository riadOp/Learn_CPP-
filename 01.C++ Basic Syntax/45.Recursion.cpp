#include<iostream>

int function1(int num);

int main(){
    std::cout<< function1(5);
    return 0;
}

int function1(int num){
    if(num==1){
        return 1;
    }else{
        return num*function1(num-1);
    }
}