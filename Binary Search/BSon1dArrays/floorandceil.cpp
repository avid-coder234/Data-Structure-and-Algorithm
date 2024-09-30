//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
    private:
    // Function for x > 
    int high(int x,vector<int> &arr){
        int n = arr.size();
        int ans = INT_MAX;
        
        for(int i = 0 ; i < n ; i++){
            if(x <= arr[i]){
                ans = min(ans,arr[i]);
            }
        }
        return (ans == INT_MAX) ? -1:ans;
    }
    // Function for x < 
    int low(int x,vector<int> &arr){
        int n = arr.size();
        int ans = INT_MIN;
        
        for(int i = 0 ; i < n ; i++){
            if(x >= arr[i]){
                ans = max(ans,arr[i]);
            }
        }
        return (ans == INT_MIN) ? -1:ans;
    }
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int ans1 = low(x,arr);
        int ans2 = high(x,arr);
        
        vector<int> ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends