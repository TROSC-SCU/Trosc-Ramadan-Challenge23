 #include <bits/stdc++.h> 
 using namespace std;

// you are given an integer and want to reverse it :)

// dont transfer the number to string it's not allowed

// ex: 123 -> 321
// ex: 120 -> 21 


int reverse(int x) {
    // complete the function 
    int ans = 0;
    while(x){
        ans *= 10;
        ans += x % 10, x /= 10;
    }
    return ans;  
}

int main(){
  int n;
  cin >> n;
  int res = reverse(n);
  cout << res;
  return 0;
}
