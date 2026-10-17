class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        
        int freq1[26] = {};
        int freq2[26] = {};

        for (char c : s){
            freq1[c - 'a']++;
        }
        for (char c : t){
            freq2[c - 'a']++;
        }

        for (int i = 0; i < 26; i++){
            if (freq1[i] != freq2[i]){
                return false;
            }
        }

        return true;
    }
};
