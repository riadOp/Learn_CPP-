#include<iostream>

int main(){
    typedef std::string newString_t;
    //A reserve keyword used to create additional name for another data type 
    typedef char char_t;
    typedef int number_t;
    //or
    using float_t = double;

    char_t mychar = 'A';
    number_t mynum = 10;
    float_t mydouble = 4.66;

    std::cout << "My num = " << mynum <<'\n';
    std::cout << "My char = " <<mychar <<'\n';
    std::cout <<"My Double = " <<mydouble <<std::endl;
    
    return 0;
}