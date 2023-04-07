/*Given two binary strings a and b, return their sum as a binary string.*/
/**
* 1 <= a.length, b.length <= 104
* a and b consist only of '0' or '1' characters.
* Each string does not contain leading zeros except for the zero itself. */

// you may need to know the rules of binary numbers addition before start coding.
string addBinary(string a, string b) {
    string result;
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }

    return result;
}
