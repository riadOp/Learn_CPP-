#include<iostream>

int main(){
    int num1,num2,choice;
    std::cout << "**************************Calculator***********************\n";
    std::cout << "1.Addition(+)\n";
    std::cout << "2.Subtraction(-)\n";
    std::cout << "3.Multiplication(*)\n";
    std::cout <<"4.Division(/)\n";
    std::cout << "Enter your choice : ";
    std::cin >> choice ;
    std::cout << "Enter first number : ";
    std::cin >> num1;
    std::cout <<"Enter Second number : ";
    std::cin >> num2 ; 
    
    switch(choice){
        case 1 : std::cout << "Addition = " << num1+num2 <<"\n";
        break;
        case 2 : std::cout << "Subtraction = " << num1-num2 <<'\n';
        break;
        case 3 : std::cout << " Multiplication = " << num1*num2 <<'\n';
        break;
        case 4 : std::cout << "Division = " << num1/num2 << '\n';
        break;
        default : std::cout << "Invalid choice !!!";
    }
    std::cout <<"*******************************************************************";
    return 0;
}