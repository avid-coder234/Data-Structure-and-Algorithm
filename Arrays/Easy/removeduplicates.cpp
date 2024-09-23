class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int ptr1 = 0;
        int ptr2 = 1;

        while(ptr2 < n){
            if(nums[ptr1] == nums[ptr2]){
                ptr2++;
            }
            else{
                ptr1++;
                nums[ptr1] = nums[ptr2];
                ptr2++;
            }
        }
        return ptr1+1;
    }
};