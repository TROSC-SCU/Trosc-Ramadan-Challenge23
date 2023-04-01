 #include <bits/stdc++.h> 

 using namespace std;

 typedef long long ll;


 // Check if three points in the same line

    bool is_same_line(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
     
      return (y2-y1)*(x3-x2) == (y3-y2)*(x2-x1);

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
