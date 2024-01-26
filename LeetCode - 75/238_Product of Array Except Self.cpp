class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int size = nums.size();
        int prod1[size], prod2[size];
        vector<int> res;

        prod1[0] = 1;
        prod2[size - 1] = 1;

        for (int a = 1; a < size; a++) {
            prod1[a] = nums[a - 1] * prod1[a - 1];
            prod2[size - a -1] = nums[size - a] * prod2[size - a];
        }

        for (int a = 0; a < size; a++) {
            res.push_back(prod1[a] * prod2[a]);
        }

        return res;
    }
};
