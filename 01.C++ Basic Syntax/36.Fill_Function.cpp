#include<iostream>

int main(){
    std::string Food[100];
    fill(Food,Food+100,"Pizza");
    for(int i=0 ;i<100; i++){
        std::cout << Food[i];
    }
    return 0;
}