#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    for(int i = 1 ; i<=n ; i++){
        if(i%2==0 && i !=n){
            std::cout << "I love that"<<" ";
        }else if(i%2 !=0 && i!=n){
            std::cout << "I hate that" <<" ";
        }else if(i==n && n%2==0){
            std::cout << "I love it";
        }else{
            std::cout <<"I hate it";
        }
    }
    return 0;
}