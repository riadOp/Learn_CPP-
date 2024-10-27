#include<iostream>
using namespace std;

int main(){
    long long int t, a, b; 
    std::cin >> t;
    for(long long int i = 1; i <= t; i++){
        std::cin >> a >> b;
        if(a % b == 0){
            std::cout << 0 << '\n';
        } else {
            long long remainder = a % b;
            long long increment = b - remainder;
            std::cout << increment << '\n';
        }
    }
    return 0;
}
