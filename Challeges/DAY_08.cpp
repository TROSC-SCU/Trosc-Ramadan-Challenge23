 #include <bits/stdc++.h> 

//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 bool isAnagram(string s, string t) {
      // write your code here
  if(s.size()!=t.size()){
        return false;
      }sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            return false;
        }
      }
      return true;
    }

int main(){

  string s,t;
  cin >> s>>t;
  if (  isAnagram( s,  t)) cout<<"YES";
  else cout<<"NO";

}
