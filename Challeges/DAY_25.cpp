#include <bits/stdc++.h>

using namespace std;

//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


 void rotate(vector<int>& nums, int k) {
  // please complete the function :)
        vector<int>v;
        if(k>nums.size()){
           k%=nums.size();
        }for(int i=0;i<nums.size();i++){
           v.push_back(nums[i]);
        }for(int i=0;i<k;i++){
           nums[i]=v[nums.size()-k+i];
        }for(int i=0;i<nums.size()-k;i++){ 
            nums[k+i]=v[i];
        }return;
    }


int main (){
  int n,k;
  cin >>n>>k;
  vector <int>  nums(n);
  for ( auto &i: nums)   cin >>i;
  
  rotate(nums,  k);
  
    for ( auto &i: nums)   cout<<i<<" ";
  
return 0;
}
