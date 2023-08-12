class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }

        long rev = 0;
        int temp = x;
        int digit;

        while(temp != 0){
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        return (rev == x);
    }
};