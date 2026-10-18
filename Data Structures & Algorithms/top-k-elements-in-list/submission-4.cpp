class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int num : nums){
            freq[num]++;
        }

        vector<pair<int, int>> pairs;
        vector<int> arr;

        for (auto &i : freq){
            pairs.push_back({i.second, i.first});
        }

        sort(pairs.begin(), pairs.end(), greater<pair<int, int>>());

        for (int i = 0; i < k; i++){
            arr.push_back(pairs[i].second);
        }

        return arr;
    }
};
