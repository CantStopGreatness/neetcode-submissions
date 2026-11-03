class Solution {
public:
    bool isHappy(int n) {
        if (n == 1){
            return true;
        }

        int num = 0;
        int curr = n;

        unordered_set<int> set;

        while (n > 0){
            num = 0;

            while (curr >= 1){
                num += (curr % 10) * (curr % 10);
                curr /= 10;
            }

            if (num == 1){
                return true;
            }
            if (set.count(num)){
                return false;
            }
            else {
                set.insert(num);
            }

            curr = num;
        }

        return false;
    }
};
