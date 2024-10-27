#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, r;
        cin >> n >> r; 
        vector<int> families(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> families[i]; 
        }

        int totalHappy = 0;
        int oddFamilies = 0;
        int totalMembers = 0;

        // Calculate total happy people and count odd families
        for (int familySize : families) {
            totalMembers += familySize; // Count total family members
        }
            for(int i = 0 ; i<n ; i++){
                if (families[i] % 2 == 0) {
                totalHappy += families[i]; 
            } else {
                int rem  = families[i]%2 ;
                totalHappy = families[i]-rem ;
            }

            }
            
        

        int totalSeats = 2 * r; // Total seats in the bus
        int remainingMembers = totalMembers - totalHappy; // Remaining members who are not happy
        
        // Calculate used rows for happy members
        int usedRows = totalHappy / 2; // Each row can seat 2 happy people
        int remainingRows = r - usedRows; // Remaining rows available

        // Now try to make more of the remaining odd family members happy
        if (remainingRows >= remainingMembers) {
            // Maximum additional happy people we can seat is min(remainingRows, remainingMembers)
            int extrahappy =  totalHappy + remainingMembers ;
        }else{
            int usedrow2 = remainingMembers%remainingRows ;
            int remRow = remainingRows - usedrow2 ;
            totalHappy = totalHappy + remRow;
        }

        cout << totalHappy << endl; 
    }
    
    return 0;
}

