class Solution {
   public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.length() - 1;
        while (low < high) {
            char l = s[low];
            char h = s[high];
            if (!isValid(h)) {
                high--;
                continue;
            }
            if (!isValid(l)) {
                low++;
                continue;
            }
            if (toSmall(h) != toSmall(l))
                return false;
            else {
                high--;
                low++;
            }
        }
        return true;
    }
    char toSmall(char c) {
        int i = (int)c;
        if (i > 64 and i < 91) return (char)(i + 32);
        return c;
    }
    bool isValid(char c) {
        int i = (int)c;
        if (i > 64 and i < 91) return true;
        if (i > 96 and i < 123) return true;
        if (i > 47 and i < 58) return true;
        return false;
    }
};
