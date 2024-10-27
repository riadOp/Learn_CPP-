#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    std::cin >> t;
    vector<int> number;
    for(int i = 1 ; i<=t ;i++){
        std::cin >> n;
        if(n%7==0){
            number.push_back(n);
        }else{
            while(n%7 != 0 && n<900){
                n++;
            }
            while(n%7 !=0 && n>=999){
                n--;
            }
            number.push_back(n);
        }
    }
    for(auto element : number){
        std::cout << element <<'\n';
    }
    return 0;
}