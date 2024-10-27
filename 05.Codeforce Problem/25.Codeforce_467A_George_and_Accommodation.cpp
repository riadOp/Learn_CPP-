#include<iostream>

int main(){
    int n ,p,q,RoomCount = 0;
    std::cin >> n;
    for(int i = 1 ; i<=n ;i++){
        std::cin >> p >> q;
        if(q-p >= 2){
            RoomCount++;
        }
    }
    std::cout << RoomCount;
    return 0;
}