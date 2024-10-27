#include<iostream>

int main(){
    const int num = 10;
   // num = 15; (Its an error cause we cannot modify it)
   std::cout << num << '\n';
    return 0;
}