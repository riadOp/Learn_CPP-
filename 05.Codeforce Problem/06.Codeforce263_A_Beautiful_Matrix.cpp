#include<iostream>

int main(){
    int matrix[5][5],ans;
    for(int i = 0 ; i<5 ; i++){
        for(int j = 0 ; j<5 ; j++){
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                ans = abs((i+1)-3) + abs((j+1)-3) ;
            }
    }
    }
    std::cout << ans;
    return 0;

}