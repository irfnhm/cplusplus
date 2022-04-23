//Leetcode reverse a number

class Solution {
public:
    int reverse(int x) {
        int64_t rev{0};
        while(x != 0){
            rev = (rev * 10) + ( x % 10);
            x /= 10;
        }
        return (rev > INT_MAX || rev < INT_MIN) ? 0 : rev;
    }
};
