#include<iostream>

int main(){
    int rows,coloums;
    char symbol;
    std::cout << "Enter number of rows : ";
    std::cin >> rows;
    std::cout << "Enter number of coloum : ";
    std::cin >> coloums;
    std::cout << "Enter symbol :";
    std::cin >> symbol;

    for(int i=1;i<=rows;i++){
        for(int j =1 ;j<=coloums;j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}