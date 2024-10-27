#include<iostream>
#include<cmath>

int main(){
    int M,N,S;
    std::cin >> M >> N;
    if(M>=1 && N>=M && N<=16 ){
        S = M * N;
        double a = S / 2.00;
        a = floor(a);
        std::cout << int(a);
    }
    return 0;
}