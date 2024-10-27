#include<iostream>

int main(){
    int t,a,b,c;
    std::cin >> t;
    std::string store[t];
    for(int i = 0 ; i<t; i++){
        std::cin >> a >> b >> c;
        if(a<b && b<c){
            store[i] = "STAIR";
        }else if(a<b && b>c) {
            store[i] ="PEAK";
        }else{
            store[i] = "NONE";
        }
    }
    for(int i = 0 ; i<t ; i++){
        std::cout << store[i] <<'\n';
    }
    return 0;
}