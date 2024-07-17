void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    	int s1 = m - 1;
	int s2 = n - 1;
	int s3 = nums1Size - 1;
	while (s1>=0&&s2>=0)
	{
		if (nums1[s1] < nums2[s2])
		{
			nums1[s3--] = nums2[s2--];
		}
		else
		{
			nums1[s3--] = nums1[s1--];
		}
	}
	while (s2 >= 0)
	{
		nums1[s3--] = nums2[s2--];
	}
}
