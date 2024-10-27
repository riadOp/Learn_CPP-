#include<iostream>
#include<cmath>

int main(){
    long long int n , m ,a ,e ,f ;
    std::cin >> n >> m >> a;
    long double c = double(n)/a;
    long double d = double(m)/a;
     e = ceil(c);
     f = ceil(d);
    long long ans = e * f ; 
    std::cout << ans;
    
    return 0;
}