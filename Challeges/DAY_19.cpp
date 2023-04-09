 #include <bits/stdc++.h> 
 using namespace std;

// you are given an integer and want to reverse it :)

// dont transfer the number to string it's not allowed

// ex: 123 -> 321
// ex: 120 -> 21 


    int reverse(int x) {
        // complete the function 
      int dig,res=0;
      while(x!=0){
          dig=x%10;
          res=(res*10)+dig;
          x/=10;
      }return res;
    }

int main(){
int n;
  cin >>n;
  int res=reverse(n);
  cout<<res;
  
  return 0;
}
