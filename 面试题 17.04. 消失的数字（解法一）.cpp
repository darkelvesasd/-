class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=size(nums);
        int value=n;
        for(int i=0;i<n;i++)
        {
            value^=i;
            value^=nums[i];
        }
        return value;

    }
};
