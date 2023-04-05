 #include <bits/stdc++.h> 
 #define cin(v) for(auto &i:v) cin >> i ;
 #define cout(v) for(auto &i:v) cout << i  <<" ";
 using namespace std;

//Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

   vector<int> evenOdd(vector<int>& v) {
   
     // please complate the code :)
       int n;
       vector<int>v2;
       cin(v);
       for(int i=0;i<v.size();i++){
           if(v[i]%2==0){
             v2.push_back(v[i]);
           }
       }for(int i=0;i<v.size();i++){
           if(v[i]%2!=0){
             v2.push_back(v[i]);
           }
       }return v2;
    }

int main(){
  int n;
  cin >>n;
  vector<int>v(n);  
  v=evenOdd( v);
  for (auto &i:v) cout<<i<<" ";

return 0;
}
