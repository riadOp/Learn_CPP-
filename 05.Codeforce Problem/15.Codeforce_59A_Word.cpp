#include<iostream>
#include<string>
#include<bits/stdc++.h>

int main(){
    int lenght , upper=0 , lower =0 , test;
    std::string s;
    std::cin >> s;
    lenght = s.length();
    for(int i = 0; i<lenght ;i++){
        test = int(s[i]);
        if(test <= 93){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper > lower){
        std::transform(s.begin(),s.end(),s.begin(),::toupper);
        std::cout << s <<'\n';
    }else{
        std::transform(s.begin(),s.end(),s.begin(),::tolower);
        std::cout << s <<'\n';
    }
    return 0;
}