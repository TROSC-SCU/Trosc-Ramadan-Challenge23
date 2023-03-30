 #include <bits/stdc++.h> 

using namespace std;

//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 bool isAnagram(const string& s, const string& t) {
	// create two arrays of size 26 to store the frequency of each letter in the strings
	vector<int> freq_s(26), freq_t(26); 
	// increment the frequency of the letter in freq1 for each letter in s
	for(auto& c : s)
		freq_s[c - 'a']++;
	// increment the frequency of the letter in freq2 for each letter in t
	for(auto& c : t)
		freq_t[c - 'a']++;
	// compare the two frequency arrays, and return true if they are equal (i.e., s and t are anagrams)
	return freq_s == freq_t;
 }

int main(){
	string s, t;
	cin >> s >> t;
	// check if the two strings one of them is anagram of the another one
	if (isAnagram(s, t))
		cout << "YES\n";
	else 
		cout << "NO\n";
	return 0;
}
