#include<limits.h>
class Solution {
public:
    int reverse(int x)
    {
        int ans=0;
        while(x!=0)
        {
            int d=x%10;
            // Ye the number is largest or the smallest toh space me error aayega
            if((ans>INT_MAX/10) || (ans<INT_MIN/10))
            {
                return 0;
            }
            ans=(ans*10)+d;
            x=x/10;
        }
        return ans;
    }
};