  #include <bits/stdc++.h> 
 
 using namespace std;
 
// reverce the string without use reverce builtin function :)

   void reverseString(string s) {
   // complete the function :)
     for(int i=s.size()-1;i>=0;i--){
         cout<<s[i];
     }
   }

int main(){
string s;
cin >>s;
reverseString(s);
  //cout<<s;

return 0;
}
