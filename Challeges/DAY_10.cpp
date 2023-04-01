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

       // complete the code : ) 
   for(int i=0;i<s.size();i++){
        if(s[i]=='['||s[i]=='{'||s[i]=='('){
            st.push(s[i]);
        }else{ 
            if(st.empty()){
                return false;
            }else{
                if((s[i]==']'&&st.top()=='[')||(s[i]=='}'&&st.top()=='{')||(s[i]==')'&&st.top()=='(')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
    }
   if(st.empty()){
       return true;
    }return false;
   
   
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
