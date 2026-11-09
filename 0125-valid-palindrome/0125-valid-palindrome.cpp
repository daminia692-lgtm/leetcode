class Solution {
public:
    bool isnumeric(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9');
    }
    char lowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z')
            return ch + 32;
        return ch;
    }
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;
        while (low < high) {
            while (low<high && !isnumeric(s[low])) {
                low++;
            }
            while (low<high && !isnumeric(s[high])) {
                high--;
            }
            if (lowercase(s[low]) != lowercase(s[high]))
                return false;
            low++;
            high--;
        }
        return true;
    }
};