class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxAr = 0;
        int ar = 0;
        int a = 0;
        int b = height.size() - 1;

        while (a < b) {
            if(height[a]<height[b]){
                ar = (b - a) * height[a];
            } else {
                ar = (b - a) * height[b];
            }

            if (ar > maxAr) {
                maxAr = ar;
            }

            if (height[a] < height[b]) {
                a++;
            } else {
                b--;
            }
        }

        return maxAr;
    }
};
