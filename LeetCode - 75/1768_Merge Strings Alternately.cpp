class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int len1 = word1.length();
        int len2 = word2.length();

        int len = len1 < len2 ? len1 : len2;

        for (int a = 0; a < len; a++) {
            res = res + word1[a] + word2[a];
        }

        int a = len;
        if (len < len1) {
            while (a < len1) {
                res += word1[a];
                a++;
            }
        } else {
            while (a < len2) {
                res += word2[a];
                a++;
            }
        }

        return res;
    }
};
