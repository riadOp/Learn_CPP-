#include<iostream>
#include<cmath>

int main(){
    int x,step;
    std::cin >> x;
    if(x>=1 && x<=1000000){
    step = ceil(x/5.00);
    std::cout << step <<'\n';
    }
    return 0;
}