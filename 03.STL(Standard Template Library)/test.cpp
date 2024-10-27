#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>Even;
    vector<int>odd;
    int n ;
    std::cin >> n;
    vector<int> store(n);
    for(int i = 0 ; i<n ;i++){
        std::cin>>store[i];
        if(store[i]%2 == 0){
            Even.push_back(store[i]);
        }else{
            odd.push_back(store[i]);
        }
    }
    for(auto& Element : Even){
        std::cout << Element;
    }
    for(auto& Element : odd){
        std::cout << Element;
    }
    return 0;
}