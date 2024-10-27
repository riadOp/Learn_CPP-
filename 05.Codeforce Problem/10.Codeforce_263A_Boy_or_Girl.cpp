#include<iostream>

int main(){
    std::string username;
    std::cin >> username;
    int size = username.length();
    int count = 0;
    for(int i = 0 ; i<size; i++){
        for(int j = i+1; j<size;j++){
            if(username[i] != username[j]){
                count++;
            }
        }
    }
    if(count %2 == 0){
        std::cout <<"CHAT WITH HER!";
    }else{
        std::cout <<"IGNORE HIM!";
    }
    return 0;
}