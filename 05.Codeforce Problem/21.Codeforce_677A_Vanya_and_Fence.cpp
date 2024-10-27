#include<iostream>

int main(){
    int n ,h ,a,WidthCount = 0 ;
    std::cin >> n >> h;
    
    for(int i = 1 ; i<=n ;i++){
        std::cin >> a ;
        if(a > h){
            WidthCount += 2 ;
        }else{
            WidthCount++;
        }
    }

    std::cout << WidthCount <<'\n';
    return 0;
}