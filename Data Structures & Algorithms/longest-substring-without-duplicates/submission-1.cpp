class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;

        int l = 0;
        int r = 0;
        int len = 0;
        int max_len = 0;

        while (r < s.size()){
            while (map.contains(s[r])){
                map.erase(s[l]);
                l++;
                len--;
            }

            map[s[r]];
            len++;
            r++;
            max_len = max(max_len, len);
        }

        return max_len;
    }
};
