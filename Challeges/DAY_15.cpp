/**
* BS (Binary Search) - Find the first position of a target number in a sorted array.
* Make it in O(log(n))
* @nums: The integer array.
* @target: Target to find.
* Return: The first position of target. Position starts from 0.
*       return -1 if target does not exist.
*/


int BS(vector<int& nums, int target)
{
  // write your code here
    sort(nums.begin(),nums.end());
    int left=0,right=nums.size()-1,ans=-1;
    while(left<=right){
        int mid=left+((right-left)/2);
        if (nums[mid] == target) {
            ans=mid;
            right=mid-1;
        }else if(nums[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return ans;
}
