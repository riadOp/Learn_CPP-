#include<iostream>
#include<cmath>

int main(){
    int a,b,hypo;
    
    std::cout <<"Enter lenth of a triangle: ";
    std::cin >> a;
    std::cout << "Enter height of a triangle : ";
    std::cin >> b;
    
    hypo = sqrt((pow(a,2)+pow(b,2)));
    std::cout << "Hypotenuse of triangle is :  " << hypo <<'\n';
    return 0;
}