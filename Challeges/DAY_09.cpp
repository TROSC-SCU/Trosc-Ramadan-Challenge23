#include <bits/stdc++.h> 
 using namespace std;


//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


    bool containsDuplicate(vector<int>& v) {
        map<int,int>m;
         sort(v.begin(), v.end());
         for (int i = 0; i < v.size() - 1; i++) {
              if (v[i] == v[i+1]) {
                  return true;
        }
    }
    return false;
}



int main (){

  int n;
  cin >>n;
  vector<int> v(n);
  for ( auto & i:v){
   cin >> i;
  }
  if (containsDuplicate(v)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}




