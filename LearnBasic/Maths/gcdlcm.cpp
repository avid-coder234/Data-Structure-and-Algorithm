//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long hcf(long long  a , long long b){
        if(b == 0)return a;
        
        return hcf(b,a%b);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> ans;
        long long ans1 = hcf(A,B);
        long long ans2 = (A * B) / ans1;
        ans.push_back(ans2);
        ans.push_back(ans1);
         return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends