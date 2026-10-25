class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;

        int l = 0;
        int r = 0;
        int sum = 0;
        int max_sum = 0;

        while (r < s.size()){
            while (map.contains(s[r])){
                map.erase(s[l]);
                l++;
                sum--;
            }

            map[s[r]];
            sum++;
            r++;
            max_sum = max(max_sum, sum);
        }

        return max_sum;
    }
};
