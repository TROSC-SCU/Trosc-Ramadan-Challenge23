  #include <bits/stdc++.h> 
 
 using namespace std;
 
// reverce the string without use reverce builtin function :)

   void reverseString(string &s) {
   // complete the function :)
   int l = 0, r = s.size() - 1; 
    while(l < r)
        swap(s[l++], s[r--]);
}

int main(){
string s;
  cin >>s;
reverseString(s);
  cout<<s;

return 0;
}
