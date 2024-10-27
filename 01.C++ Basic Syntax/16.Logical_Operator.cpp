#include<iostream>

int main(){
    int num;
    std::cout <<"Enter a number : ";
    std::cin >> num;
    if(num>0 && num<=10){
        std::cout << "Logical And!!";
    }else if(num>100 || num>300){
        std::cout << "Logical Or!!";
    }else if(num != 30){
        std::cout <<"Logical not!!"; 
    }else{
        std::cout << "Not Okayy!!";
    }
    return 0;
}