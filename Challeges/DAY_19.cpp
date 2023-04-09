 #include <bits/stdc++.h> 
 using namespace std;

// you are given an integer and want to reverse it :)

// dont transfer the number to string it's not allowed

// ex: 123 -> 321
// ex: 120 -> 21 


    int reverse(int x) {
        // complete the function 
        int res = 0;
        while(x){
            res *= 10;
            res += x % 10;
            x /= 10;
        }
      return res;
    }

int main(){
int n;
  cin >>n;
  int res=reverse(n);
  cout<<res;
  
  return 0;
}
