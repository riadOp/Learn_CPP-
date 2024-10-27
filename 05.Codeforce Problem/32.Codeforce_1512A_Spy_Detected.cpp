#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<int> results;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int uniqueIndex = 0;

        if (a[0] != a[1] && a[0] != a[2]) {
            uniqueIndex = 1;
        } else {
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    uniqueIndex = i + 1;
                    break;
                }
            }
        }
        
        results.push_back(uniqueIndex);
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}
