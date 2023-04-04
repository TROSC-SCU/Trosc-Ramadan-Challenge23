 #include <bits/stdc++.h> 
 using namespace std;

//Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

   vector<int> evenOdd(vector<int>& v) {
   
     // please complate the code :)
     
    }

int main(){
int n;
  cin >>n;
  vector<int>v(n);
  for (auto &i:v) cin>>i;
  
  v=evenOdd( v);
  for (auto &i:v) cout<<i<<" ";

return 0;
}
