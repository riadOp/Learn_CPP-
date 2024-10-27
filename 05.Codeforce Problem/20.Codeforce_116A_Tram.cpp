#include<iostream>

int main(){
    int n , enter , exit , maxCap = 0 , cap , CountCap = 0 ;
    std::cin >> n;
    for(int i = 1 ; i<=n ; i++){
        std::cin >> exit;
        std::cin >> enter ;
        if(i==1){
            cap = enter - exit ;
            CountCap = cap;

            if(CountCap > maxCap){
                maxCap = cap ;
            }
        }else{
            cap = (CountCap - exit) + enter ;
            CountCap = cap ;
        
            if(CountCap > maxCap ){
                maxCap = CountCap;
                
            }
        }
    }
    std::cout << maxCap <<'\n';
    return 0;
}