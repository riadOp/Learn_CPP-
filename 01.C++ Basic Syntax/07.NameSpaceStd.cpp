#include<iostream>

int main(){
    using namespace std;
    //by using this we can save some time but not recommended.
    // instend of using namespace std , we can use :
    using std::string;
    using std::cout;

    string name = "Riad";
    //instend of using std::string we can simply write string 
    
    cout << name << '\n';
    //instend of using std::cout we can simply write cout
    
    return 0;
}