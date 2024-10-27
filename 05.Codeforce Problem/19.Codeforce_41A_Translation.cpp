#include<iostream>
#include<string>

int main() {
    std::string s, t;
    std::cin >> s >> t;
    int length = t.length();
    
    
    for (int i = 0; i < length / 2; i++) {
        char temp = t[i];                   
        t[i] = t[length - 1 - i];           
        t[length - 1 - i] = temp;           
    }


    if (s == t) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
