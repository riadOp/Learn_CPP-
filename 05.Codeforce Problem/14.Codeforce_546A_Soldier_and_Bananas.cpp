#include<iostream>

int main(){
    int k,n,w,total_price = 0,iprice,burrow;
    std::cin >> k >> n >> w;
    if(k>=1 && w<=1000 && n>=0 && n<=10000000000){
        for(int i = 1; i<=w ;i++){
            iprice = i * k;
            total_price = total_price + iprice;
        }
        if(n > total_price){
            burrow = 0;
        }else{
        burrow = abs(n-total_price);
        }
        std::cout << burrow <<'\n';
    }
    return 0;
}