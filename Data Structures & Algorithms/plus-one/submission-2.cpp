class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long num = 0;

        for (int i = 0; i < digits.size(); i++){
            num = num * 10 + digits[i];
        }

        num += 1;
        vector<int> arr;

        while (num > 0){
            arr.push_back(num % 10);
            num /= 10;
        }

        reverse(arr.begin(), arr.end());
        return arr;
    }
};
