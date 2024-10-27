#include<iostream>
using namespace std ;

int main(){
    int t,n,x ,last_gas_station;
    cin >> t ;
    for(int i = 1 ; i<=t ; i++){
        cin >> n >> x ;
        int max = 0 , temp=0;
        for(int j = 1 ; j<=n ; j++ ){
            int gas_station;
            cin >> gas_station;
            int temp2 = 0;
            if(j == 1){
                temp2 = gas_station- 0 ;
            }else{
                temp2 = gas_station-temp ;
            }
            
            if(temp2 > max){
                max = temp2 ;
            }
            if(j==n){
                last_gas_station = gas_station ;
                break ;
            }
            temp = gas_station ;
        }
        int last_check = (x-last_gas_station)*2 ;
        if(last_check > max){
            max = last_check ;
        }
        cout << max << endl ;
    }
    return 0 ;
}