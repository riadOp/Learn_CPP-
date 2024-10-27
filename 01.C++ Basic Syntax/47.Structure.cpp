#include<iostream>

struct student{
    std::string name ;
    int age;
    bool Male;
};

int main(){
    student student1;
    student1.name = "Bob";
    student1.age = 22;
    student1.Male = true;

    std::cout << student1.name <<std::endl ;
    std::cout <<student1.age <<std::endl ;
    std::cout <<student1.Male <<std::endl ;
    
    return 0;
}