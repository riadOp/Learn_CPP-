#include<iostream>
#include<bits/stdc++.h>
#include<string>

int main(){
    std::string word;
    std::cin >> word;
    std::transform(word.begin(),word.begin()+1,word.begin() ,::toupper);
    std::cout << word;
    return 0;
}