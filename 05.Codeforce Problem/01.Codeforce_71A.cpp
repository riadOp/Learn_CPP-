#include<iostream>
#include<string>

int main(){
    int n ;
    std::cin >> n;
    if(n>= 1 && n<=100){
    std::string a[n] ;
    int len[n]; 
    for(int i = 0 ; i<n ; i++){
        std::cin >> a[i];
    }
    for(int i = 0 ; i<n ;i++){
        std::string  b = a[i];
        len[i] = a[i].length();
        if(len[i] >= 1 && len[i] <= 100){
        if(len[i] > 10 ){
            std::cout << b[0] << len[i] - 2 << b[len[i]-1] <<std::endl;
        } else{
            std::cout << a[i] << std::endl;
        }
    }
    }

    return 0;
}
}