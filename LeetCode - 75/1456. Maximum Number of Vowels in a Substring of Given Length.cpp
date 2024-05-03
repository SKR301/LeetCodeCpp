class Solution {
public:
    bool isvowel(char v) {
        return (0x208222>>(v&0x1f))&1;
    }

    int maxVowels(string s, int k) {
        int count = 0;
        int size = s.length();
        
        for (int x = 0; x < k; x++) {
            if(isvowel(s[x])){
                count++;
            }
        }

        double maxCount = count;
        int a = 0;
        int b = a + k;
        while (a < size - k) {
            if(isvowel(s[a])){
                count--;
            }
            if(isvowel(s[b])){
                count++;
            }

            if (count > maxCount) {
                maxCount = count;
            }
            a++;
            b++;
        }

        return maxCount;
    }
};
