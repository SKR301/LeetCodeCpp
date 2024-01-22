class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> res;
        int len = candies.size();

        for(int a=0; a<len; a++){
            if(candies[a] + extraCandies >= max){
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        return res;
    }
};