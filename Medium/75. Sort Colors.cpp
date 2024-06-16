class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(const int& num: nums){
            if(num == 0) count0++;
            if(num == 1) count1++;
            if(num == 2) count2++;
        }

        int a=0;
        while(a<count0){
            nums[a] = 0;
            a++;
        }
        while(a<count0+count1){
            nums[a] = 1;
            a++;
        }
        while(a<count0+count1+count2){
            nums[a] = 2;
            a++;
        }
    }
};