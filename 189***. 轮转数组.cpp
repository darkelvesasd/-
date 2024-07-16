class Solution {
    
public:
void Reverse(vector<int> &nums, int left, int right)
{
	while (left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}
}
    void rotate(vector<int>& nums, int k) {
	int n = nums.size();
if (k >= n)
	{
		k = k % n;
	}
	Reverse(nums,0, n-1-k);
	Reverse(nums,n-k, n - 1);
	Reverse(nums, 0, n - 1);
    }
};
