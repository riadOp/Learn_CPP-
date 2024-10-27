#include<iostream>

int main(){
    int n , magnet , temp , Group = 1;
    std::cin >> n;
    for(int i = 1 ; i<=n ; i++){
        std::cin >> magnet;
        if(magnet == 10 || magnet == 01){
        if(i == 1 ){
            temp = magnet;
        }else{
            if(temp != magnet){
                Group++;
            }
            temp = magnet;
        }
        }
    }
    std::cout << Group;
    return 0;
}