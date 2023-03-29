#include <bits/stdc++.h>
#include <string>

using namespace std;

//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main(){
    string s,t;
    cin >> s>>t;
    if (isAnagram(s, t)) {
        cout<<"YES";
    } 
    else {
        cout<<"NO";
    }
    return 0;
}
