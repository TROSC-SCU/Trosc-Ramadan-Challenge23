/*Given two binary strings a and b, return their sum as a binary string.*/
/**
* 1 <= a.length, b.length <= 104
* a and b consist only of '0' or '1' characters.
* Each string does not contain leading zeros except for the zero itself. */

// you may need to know the rules of binary numbers addition before start coding.
string addBinary(string a, string b) {
      // write your code here.  
        int i=a.length()-1,j=b.length()-1,carry=0;
        string ans="";
        while(i>=0||j>=0||carry){
            if(i>=0){
                carry+=a[i]-'0';
                i--;
            }if(j>=0){
                carry+=b[j]-'0';
                j--;
            }ans+=carry%2+'0';
            carry=carry/2;
        }reverse(ans.begin(),ans.end());
        return ans;
}
