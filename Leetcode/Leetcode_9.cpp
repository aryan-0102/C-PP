// Given an integer x, return true if x is a palindrome, and false otherwise.

#include <iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        // Check if x is negative or ends with 0 (except for 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }
        
        // When the length of the number is odd, we ignore the middle digit
        // by dividing reversedHalf by 10
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
