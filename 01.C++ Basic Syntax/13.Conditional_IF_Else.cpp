#include<iostream>

int main(){
    int marks;
    std::cout << "Enter Your marks : ";
    std::cin >> marks;
    if(marks > 30 ){
        std::cout << "You Pass in the exam !!";
    }else if(marks < 0){
        std::cout << "Invalid number !!";
    }else{
        std::cout << "You fail !!";
    }
    return 0;
}