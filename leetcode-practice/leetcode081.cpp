
// NO33 不包含重复元素
int search(vector<int>& nums, int target) {
	if(nums.empty())
		return -1;
	int left=0, right=nums.size()-1;
	int mid=0;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		if(nums[mid]==target)
				return mid;
		if(nums[left]<=nums[mid])
		{
			if(nums[left]<=target  &&  target<nums[mid])
					right=mid-1;
			else
					left=mid+1;
		}
		else
		{
			if(nums[mid]<target  &&  target<nums[left])
					left=mid+1;
			else
					right=mid-1;
		}
	}
	return -1;
}

int search(vector<int>& nums, int target) {
	if(nums.empty())
		return false;
	int left=0, right=nums.size()-1;
	int mid=0;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		if(nums[mid]==target)
				return true;
		if(nums[left]==nums[mid]  &&  nums[mid]==nums[right])
		{
			left++;
			right--;
		}
		else if(nums[left]<=nums[mid])
		{
			if(nums[left]<=target  &&  target<nums[mid])
					right=mid-1;
			else
					left=mid+1;
		}
		else
		{
			if(nums[mid]<target  &&  target<nums[left])
					left=mid+1;
			else
					right=mid-1;
		}
	}
	return false;
}