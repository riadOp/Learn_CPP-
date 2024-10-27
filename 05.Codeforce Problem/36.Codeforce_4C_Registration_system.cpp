#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    string s ;
    vector<string> result;
    map<string,int>Frequency;
    for(int i = 1 ; i<=n ;i++){
        std::cin >> s;
        if(Frequency.find(s) == Frequency.end()){
            std::cout <<"OK\n";
        }else{
            std::cout << s << Frequency[s] <<"\n";
        }
        Frequency[s]++;
    }
    return 0;
}