#include<iostream>

int main(){
    int n,m,c,mikasa=0,chris= 0 ,draw = 0;
    std::cin >> n;
    for(int i = 1 ; i<=n ; i++){
        std::cin >> m >> c;
        if(m > c){
            mikasa++;
        }else if(c > m){
            chris++;
        }else{
            draw++;
        }
    }
    if(mikasa > chris){
            std::cout <<"Mishka";
        }else if(chris > mikasa){
            std::cout <<"Chris";
        }else{
            std::cout <<"Friendship is magic!^^";
        }
    return 0;
}