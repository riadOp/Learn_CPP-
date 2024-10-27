#include<iostream>
#include<string>

int main(){
    std::string Foods[5],temp;
    int size = sizeof(Foods) / sizeof(std::string);
    for(int i = 0 ; i<size ; i++){
        std::cout <<"Enter Your favorite Food " <<i+1 <<" Or q to exit : ";
        getline(std::cin >> std::ws, temp);
        if(temp == "q" || temp == "Q"){
            break;
        }else{
            Foods[i] = temp;
        }
    }  
    std::cout << "Your Foods are : \n";
    for(int i = 0 ; ! Foods[i].empty();i++){
        std::cout << i+1 <<"." << Foods[i] <<'\n';
    }
    return 0;
}