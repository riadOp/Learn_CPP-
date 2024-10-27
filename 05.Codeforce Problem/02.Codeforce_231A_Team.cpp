#include<iostream>

int main(){
    int n,p,v,t,sum=0,solvecount=0;
    std::cin >> n;
    if(n >= 1 && n<=1000){
        for(int i = 1 ; i<=n ; i++){
            std::cin >> p >> v >> t;
            if( p||v||t==0 || p||v||t==1){
               sum = 0;
                int sum = p+v+t;
                if(sum>=2){
                     solvecount++;
                }
        }
        }
        std::cout << solvecount;
    }
    return 0;
}