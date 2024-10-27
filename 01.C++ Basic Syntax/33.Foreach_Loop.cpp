#include<iostream>

int main(){
    std::string student[] ={"Bob","Jimy","Robby"};
    for(std::string stud : student){
        std::cout << stud <<'\n'; 
    } 
    return 0;
}