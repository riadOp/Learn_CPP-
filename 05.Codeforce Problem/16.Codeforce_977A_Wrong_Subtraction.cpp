#include<iostream>

int main(){
    int n,k,ldigit;
    std::cin >> n >> k ;
    
        for(int i = 1 ; i<=k ;i++){
            ldigit = n%10;
            if(ldigit != 0 ){
                n = n-1;
            }else{
                n = n/10;
            }
        }
        std::cout << n <<'\n';
    
    return 0;
}