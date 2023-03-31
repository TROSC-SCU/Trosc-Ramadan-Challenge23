#include <bits/stdc++.h> 
 using namespace std;


//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


    bool containsDuplicate(vector<int>& v) {
        map<int,int>m;
      
// complete the code :)
        int n=v.size();
        int freq[n+1]{};
        for(int i=0;i<n;i++){
            freq[v[i]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[v[i]]>=2){
                return true;
            }break;
        }return false; 
    }

int main (){

  int n;
  cin >>n;
  vector<int> v(n);
  for ( auto & i:v) cin >> i;
  
  if (containsDuplicate(v))
     cout<<"YES";
  else 
    cout<<"NO";
  
  
  
return 0;
}




