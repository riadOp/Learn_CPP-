#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,Count = 0 ,MaxCount = 0;
    std::cin >> n;
    set<int>Store;
    for(int i = 1 ; i<=2*n ; i++){
        std::cin>> x;
        if(Store.count(x) == 0){
            Store.insert(x);
            Count++;
            if(Count > MaxCount){
                MaxCount = Count;
            }
        }else{
            Count--;
        }
    }
    

    std::cout << MaxCount;

    return 0;
}