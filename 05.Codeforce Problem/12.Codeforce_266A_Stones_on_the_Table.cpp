#include<iostream>

int main(){
    int n,stone=0;
    std::cin >> n;
    char store[n];
    for(int i = 0; i<n; i++){
        std::cin >> store[i];
    }
    for(int i = 0 ; i<n ;i++){
        if(store[i] != store[i+1]){
            stone = stone + 0;
        }else{
            stone++;
        }
    }
    std::cout << stone <<'\n';
    return 0;
}