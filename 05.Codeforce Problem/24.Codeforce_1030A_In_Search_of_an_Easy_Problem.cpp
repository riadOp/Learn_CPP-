#include<iostream>

int main(){
    int n ,Op ,easy = 0 , hard = 0;
    std::cin >> n;
    for(int i = 1 ; i<=n ; i++){
        std::cin >> Op;
        if(Op == 0){
            easy++;
        }else if(Op == 1){
            hard++;
        }
    }
    if(hard >= 1){
        std::cout <<"HARD\n";
    }else{
        std::cout<<"EASY\n";
    }
    return 0;
}