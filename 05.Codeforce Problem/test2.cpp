#include<iostream>
using namespace std;
int main(){
    int N ;
    cin >> N ;
    int A[N];
    for(int i = 0 ; i<N ; i++){
        cin >> A[i];
    }
    // for(int i = N-1 ; i>=0 ; i--){
    //     cout<<A[i]<<" " ;
    // }
    int last = N-1 ;
    for(int i = 0 ; i<N/2 ; i++){
        int temp = A[i] ;
        A[i] = A[last];
        A[last] = temp ;
        last -- ;
    }

    for(int i = 0 ; i<N ; i++){
        cout <<A[i]<<" ";
    }
    return 0;
}