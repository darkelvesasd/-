class Solution {
public:
    int missingNumber(vector<int>& nums) {
	int n = nums.size();
	int a = n;
	for (int i = 0; i < n; i++)
	{
		a ^= nums[i]^=i;
	}
	return a;
    }
};
