#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,rating;
    std::cin >> t;
    vector<string> result ;
    for(int i = 1 ; i<=t ; i++){
        std::cin >> rating ;
        if(rating <= 1399){
            result.push_back("Division 4");
        }else if(rating >= 1400 && rating<=1599){
            result.push_back("Division 3");
        }else if(rating >= 1600 && rating<=1899){
            result.push_back("Division 2");
        }else{
            result.push_back("Division 1");
        }
    }
    for(auto element : result){
        std::cout << element <<'\n';
    }
    return 0;
}