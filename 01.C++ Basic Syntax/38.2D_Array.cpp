#include<iostream>

int main(){
    std::string AMW [][3] = {{"Demon Slayer","Attack On Titan","SpyXfamily"},
                            {"Ironman","Spoider-man","Loki"},
                            {"hello","HelloHello","HelloHelloHello"}}; 

    int size_row = sizeof(AMW) / sizeof(AMW[0]);
    int size_col = sizeof(AMW[0]) /sizeof(AMW[0][0]);

    std::cout <<"Total Element in Row : " << size_row <<std::endl;
    std::cout <<"Total Element in Coloum : " <<size_col <<std::endl;   

    for(int i = 0 ; i<size_row ; i++){
        for(int j = 0; j<size_col ;j++){
            std::cout <<"Element in " << i+1 << j+1  << ":"<< AMW[i][j] << std::endl;
        }
    }
    return 0;
}