#include<iostream>

int main(){
    int a,b,Year=0;
    std::cin >> a >> b;
    if(a>=1 && a<=b && b<=10){
        while(a <= b){
            a = a*3;
            b = b*2;
            Year++;
        }
        std::cout << Year <<'\n';
    }
    return 0;
}