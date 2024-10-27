#include<iostream>

int main(){
    long long int n,b,count = 0;
    std::cin >> n ;
    while(n>9){
        b = n%10;
        n = n / 10;
        if(b == 4 || b == 7 ){
            count++;
        }else{
            count = count + 0;
        }
    }    
    if(n == 4 || n == 7){
        count ++;
    }
    if(count == 4 || count == 7){
        std::cout << "YES" <<'\n';
    }else{
        std::cout << "NO" <<'\n';
    }
return 0;
}