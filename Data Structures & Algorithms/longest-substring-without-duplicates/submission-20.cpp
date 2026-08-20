class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1)return s.size();
        int i = 0;
        int j= 0;
        int maxi = 0;
        unordered_set<char> meow;
        for ( ; j < s.length(); j++){
            while (meow.contains(s[j])) 
            {
                    meow.erase(s[i]);
                    i++;
            }
            meow.insert(s[j]);
            maxi = max(maxi,j-i);
        }
        return maxi +1;
    }
};