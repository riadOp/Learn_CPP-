#include<iostream>
using namespace std ;
int main(){
    int t ,n ;
    cin >> t ;
    for(int i = 1 ; i<=t ;i++){
        cin >> n ;
        string s[n];
        int Count = 0;
        for(int j = 0 ; j<n ; j++){
            cin >> s[j];
        }
        for(int k = 0 ; k<n ; k++){
           if(s[k]=="."){
            Count++;
            if(k>0 && k+1<n &&  s[k-1]=="." && s[k+1]=="."){
                k++;
            }
           }
        }
        cout << Count <<endl ;
    }
    return 0 ;
}