//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getPairsCount(const std::vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        int count = 0;

        for (int num : arr)
        {
            freq[num]++;
        }
        for (int num : arr) {
            int complement = k - num;
            // Check if the complement exists in the map
            if (freq.find(complement) != freq.end() ) {
                // If num and complement are the same, then to avoid repetetive addition reducing 1 unit
                if (num == complement) {
                    count += (freq[num] - 1);
                } else {
                    count += freq[complement];
                }
                // Decrease the count of the current number to avoid repeted countings
                freq[num]--;
            }
        }
       
        
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int k;

        cin >> k;
        cin.ignore(); // Ignore the newline character after k

        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getPairsCount(arr, k);
        cout << ans << "\n";
    }

    return 0;
}
// } Driver Code Ends
