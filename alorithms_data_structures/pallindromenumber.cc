// Given an integer x, return true if x is palindrome integer.

bool isPalindrome(int x) {
    int y = x;
    string s = to_string(x);
    reverse(s.begin(), s.end());
    string t = to_string(y);
    if(t == s) return true;
    return false;
}
