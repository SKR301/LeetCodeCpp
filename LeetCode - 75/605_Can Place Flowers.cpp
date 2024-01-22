class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.insert(flowerbed.end(), 0);

        for(int a=1; a<=size; a++){
            if(flowerbed[a] == 1){
                a++;
            } else {
                if(flowerbed[a-1] == 0 && flowerbed[a+1] == 0){
                    count++;
                    a++;
                }
            }
        }

        return (n<=count);
    }
};