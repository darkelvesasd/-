int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize;)
	{
		if (val == nums[i])
		{
			if (i + 1 < numsSize)
			{
				for (int j = i; j < numsSize; j++)
				{
					if (j + 1 < numsSize)
					{
						nums[j] = nums[j + 1];
					}
					else
					{
						nums[j] = NULL;
					}
				}
			}
			else
			{
				nums[i] == 0;
			}
            numsSize--;
		}
		else
		{
			i++;
		}
	}return numsSize;
}
