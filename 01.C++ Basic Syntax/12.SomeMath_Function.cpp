#include<iostream>
#include<cmath>

int main(){
    int a=10,b=15,c=-34;
    double d = 4.34;

    int max = std::max(a,b); //Maximum value  of two intiger or double!!
    int min = std::min(a,b); //Minimum value  of two intiger or double!!
    int power = pow(a,2); //Power of a number !!
    double sqt = sqrt(b); // Square Root of a number!1
    int absolute = abs(c); // Absolute value of a number !!
    int round_value = round(d); // Round value of a number !!
    int ceil_value = ceil(d); // Highest round value of a number !!
    int floor_value = floor(d); // Lowesr round value of a number !!

    std::cout <<"Max value between two : " << max << '\n';
    std::cout <<"Minimum value of two : " <<min << '\n';
    std::cout << "Power of something : " << power << '\n';
    std::cout <<"Square Root of number :" << sqt << '\n';
    std::cout <<"Absolute value : " << absolute << '\n';
    std::cout <<"Round value : " << round_value << '\n';
    std::cout <<"Highest round value : " <<ceil_value << '\n';
    std::cout <<"Lowest round value : " <<floor_value << '\n';
    return 0;
}