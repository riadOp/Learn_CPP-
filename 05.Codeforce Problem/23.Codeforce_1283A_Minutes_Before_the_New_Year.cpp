#include<iostream>

int main(){
    int t,h,m,rem;
    std::cin >> t;
    int store[t];
    for(int i = 0 ; i<t ; i++){
        rem = 0;
        std::cin >> h >> m ;
        rem = ((24 - h) * 60)-m;
        store[i] = rem;
    }

    for(int i = 0 ; i<t ; i++){
        std::cout << store[i] <<'\n';
    }
    return 0;
}