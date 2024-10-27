#include<iostream>
template<typename T , typename U>
auto func(T a , U b){
    return a+b;
}

int main(){
     std::cout << func(5.0,2.0);
    return 0;
}