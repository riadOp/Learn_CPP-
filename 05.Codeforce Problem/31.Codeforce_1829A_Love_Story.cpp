#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t , Count = 0;
    std::cin >> t;
    vector<int> Final;
    std::string s , code ={"codeforces"};
    for(int i = 0 ; i<t ; i++){
        std::cin >> s;
        Count = 0;
        for(int j = 0 ; j<10 ; j++){
            if(s[j] != code[j]){
                Count ++;
            }
        }
        Final.push_back(Count);
    }
    for(auto element : Final){
        std::cout << element <<'\n';
    }
    return 0;
}