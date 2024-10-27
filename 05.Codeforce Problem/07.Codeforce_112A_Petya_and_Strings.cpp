#include<iostream>
#include<string>
#include<bits/stdc++.h>

int main(){
    std::string str1 , str2;
    std::cin >> str1 >> str2;
    std::transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper); 
    int a = str1.compare(str2);
    std::cout << a;
    return 0;
}