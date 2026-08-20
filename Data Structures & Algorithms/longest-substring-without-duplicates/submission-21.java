class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s.length() <= 1)
            return s.length();
        int low = -1;
        int high = 0;
        int max = -1;
        Map<Character, Integer> map = new HashMap<>();
        for (Character ch : s.toCharArray()) {
           
            if (map.containsKey(ch)) {
                max = Math.max(max, high - low - 1);
                low = Math.max(low,map.get(ch));  
            }
            map.put(ch, high);
            high++;
        }
        
        return Math.max(max, high - low - 1);
    }
}
