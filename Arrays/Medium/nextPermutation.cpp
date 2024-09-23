class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // Find the break point 
        for(int i = n - 2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                //index i is break point 
                index = i;
                break;
            }
        }
        // Edge Case if there the vector has last permutation
        if(index == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        // Find the next greater element in right side 
        for(int i = n - 1;i>=0 ; i--){
            if(nums[i] > nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }

        // Reverse the right part
        reverse(nums.begin()+index+1,nums.end());
    }
};