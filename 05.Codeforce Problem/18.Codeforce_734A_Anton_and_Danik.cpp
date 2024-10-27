#include<iostream>

int main(){
    int n,WAnton = 0, WDanik = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s ;
    for(int i = 0 ; i<n ; i++){
        if(s[i] == 'A'){
            WAnton++;
        }else if(s[i] == 'D'){
            WDanik++;
        }
    }
    if(WAnton > WDanik){
        std::cout <<"Anton" <<'\n';
    }else if(WDanik > WAnton){
        std::cout <<"Danik" <<'\n';
    }else{
        std::cout <<"Friendship" <<'\n';
    }
    return 0;
}