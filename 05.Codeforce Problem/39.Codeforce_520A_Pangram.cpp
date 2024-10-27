#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    set<char> Final;
    char store[n];
    
    for(int i = 1 ; i<=n ; i++){
        cin >> store[i];
        char temp = towlower(store[i]);
        Final.insert(temp);
    }
    if(Final.size() >= 26){
        std::cout << "YES\n";
    }else{
        std::cout <<"NO\n";
    }

    return 0;
}