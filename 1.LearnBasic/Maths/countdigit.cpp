//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int num = N;
        int count = 0;
        
        while(num > 0){
            // Store the digit 
            int digit = num % 10;
            num = num / 10;
            // Check the condition if digit is not 0 ( Division by 0 ka error aayega)
            // Proper divisor also 
            if(digit != 0 && N % digit == 0){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends