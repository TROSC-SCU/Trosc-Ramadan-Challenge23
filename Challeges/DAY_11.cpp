 #include <bits/stdc++.h> 
 #define ll long long
 using namespace std;

 // Check if three points in the same line

    bool is_same_line(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
      // please complete the function  : )  
      ll res1,res2;
      res1=((y3-y2)*(x2-x1));
      res2=((y2-y1)*(x3-x2));
      if(res1!=res2){
          return false;
      }return true;
    }

int main (){
ll x1,  y1,  x2,  y2, x3,  y3;
  cin >>x1>>y1>>x2>>y2>>x3>>y3;
  
  if (is_same_line(x1, y1, x2, y2, x3, y3)){
    cout<<"yes in the same line";
  }else {
  cout<<"not in the same line";
  }
  return 0;
  
}
