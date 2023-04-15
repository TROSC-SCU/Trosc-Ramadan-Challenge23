#include <bits/stdc++.h>

using namespace std;

//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


 void rotate(vector<int>& nums, int k) {
  // please complete the function :)
   
   
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
