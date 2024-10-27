#include<iostream>

void ShowNm(int num);

int main(){
    int num;
    std::cin >> num;
    ShowNm(num);
    return 0;
}
//Function is a block of reusable Code

void ShowNm(int num){
    std::cout << "Your numbers are : \n";
    for(int i =1 ; i<=num ; i++){
        std::cout << i << std::endl;
    }
}