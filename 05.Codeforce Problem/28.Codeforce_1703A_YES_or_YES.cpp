#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    std::cin >> t;
    std::string s;
    vector<string>store;
    for(int i = 1 ;i<=t ;i++){
        std::cin >> s;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        if(s=="YES"){
            store.push_back("YES"); 
        }else{
            store.push_back("NO");
        }
    }
    for(auto element : store){
        std::cout <<element <<'\n';
    }
    return 0;
}