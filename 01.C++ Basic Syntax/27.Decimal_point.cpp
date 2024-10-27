#include<iostream>
#include<iomanip>

int main(){
    double number = 10.4555555;

    std::cout << "Precision : " << std::setprecision(3) << std::fixed << number <<'\n';
    //Reset precision for future;
    
    std::cout.unsetf(std::ios::fixed);
    std::cout.precision(6);//Genaral value;
    
    std::cout <<"Without Precision : " <<number;
    return 0;
}