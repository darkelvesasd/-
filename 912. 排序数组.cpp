class Solution {
public:
void Swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void quicksort(vector<int>&arr,int left,int right)
{
	srand(time(NULL));
	if (right <= left)
	{
		return;
	}
	int x = arr[ rand() % (right - left + 1) + left];
	int l = left - 1;
	int r = right + 1;
	int i = left;
	while (i<r)
	{

		if (arr[i] < x )
		{
			Swap(&arr[i++], &arr[++l]);
		}
		else if (arr[i] > x)
		{
			Swap(&arr[i], &arr[--r]);
		}
		else
		{
			i++;
		}
	}
	quicksort(arr,left,l);
	quicksort(arr, r, right);
}
    vector<int> sortArray(vector<int>& nums) {
int n = nums.size();
	quicksort(nums,0, n - 1);
	return nums;
    }
};
