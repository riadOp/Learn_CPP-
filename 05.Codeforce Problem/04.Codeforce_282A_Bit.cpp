#include<iostream>

int main(){
    int n,X=0;
    std::string g;
    std::cin >> n;
    for(int i = 1 ; i<=n ; i++){
        std::cin>> g ;
        if(g == "X++"){
            X++;
        }else if(g == "X--"){
            X--;
        }else if(g == "++X"){
            ++X;
        }else if(g == "--X"){
            --X;
        }
    }
    std::cout << X;
    return 0;
}