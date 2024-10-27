#include<iostream>

int main(){
    std::string name = "Hayyyy";
    int age =  30;
    int array[5] = {1,2,3,4,5};

    std::string *pname = &name;
    int *pAge = &age;
    int *pArray = array;//Array is already an address

    std::cout <<"Adreess of name : " << pname <<std::endl;
    std::cout <<"Value of name : " << *pname <<std::endl;
    std::cout <<"Value of age : " << *pAge <<std::endl;
    std::cout <<"Value of array : " << *array <<std::endl;
    return 0;
}