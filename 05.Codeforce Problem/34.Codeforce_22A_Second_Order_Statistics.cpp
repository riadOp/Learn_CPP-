#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , s;
    std::cin >> n;
    set<int> Answer;
    for(int i = 1; i<=n ;i++){
        std::cin >> s;
        Answer.insert(s);
    }
    auto it = Answer.begin();
    for(int i = 0 ; i<1 ;i++){
        it++;
    }
    if(it != Answer.end()){
        std::cout << *it;
    }else{
        std::cout <<"NO";
    }
    return 0;
}