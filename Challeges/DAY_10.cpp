 #include <bits/stdc++.h> 
 using namespace std;

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

"(){}[]"  -> true
"(())[()]"-> true
"((())}"  -> false
"[[]]("   -> false
*/

 bool isValid(string s) {
        stack<char>st;
        for (char x : s) {
            if (x == '(') st.push(')');
            else if (x == '{') st.push('}');
            else if (x == '[') st.push(']');
            else if (st.empty() || st.top() != x) return false;
            else st.pop();
    }
    return st.empty();
   
   
   
    }

int main(){
string s;
  cin >> s;
  if (isValid(s)){
  cout<<"Valid"<<"\n";
  }else {
   cout<<"Not Valid"<<"\n";
  }  

return 0;
}


/*
1 <= s.length <= 1e4
s consists of parentheses only '()[]{}'.

*/
