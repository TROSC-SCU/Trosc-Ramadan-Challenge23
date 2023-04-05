/**
* BS (Binary Search) - Find the first position of a target number in a sorted array.
* Make it in O(log(n))
* @nums: The integer array.
* @target: Target to find.
* Return: The first position of target. Position starts from 0.
*       return -1 if target does not exist.
*/


int BS(vector<int>& nums, int target)
{
  // write your code here
  int l = 0, r = nums[nums.size() - 1];
   while(l <= r){
     int m = r - (r - l) / 2;
     if(nums[m] == target) return m;
     (nums[m] < target ? l = m + 1 : r = m - 1);
   }
   return -1;
}
