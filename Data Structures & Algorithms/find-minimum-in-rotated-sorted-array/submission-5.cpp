class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int final_min = nums[0];

        while (l <= r){
            int cur_min = min(nums[l], nums[r]);
            final_min = min(cur_min, final_min);
            l++;
            r--;
        }

        return final_min;
    }
};
