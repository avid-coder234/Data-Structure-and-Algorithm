class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int n = nums.size();
        int p1 = 0;
        int p2 = 0;
        while(p1 <= n-1)
        {
            if(nums[p1] == 0)
            {
                p1++;
            }
            else
            {
                swap(nums[p1],nums[p2]);
                p1++;
                p2++;
            }
        }
        
    }
};