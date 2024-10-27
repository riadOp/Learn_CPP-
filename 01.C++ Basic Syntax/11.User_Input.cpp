#include<iostream>

int main(){
    std::string name ;
    int age ;

    std::cout << "Enter Your name : ";
    std::cin >> name; // this has a issue , not gonna take the name input after space
    std::cout << "Enter your age : ";
    std::cin >> age;

    std::cout <<"Hello , "<<" " << name <<'!' <<'\n';
    std::cout <<"You are " << age <<" Years old \n";

    return 0;
}