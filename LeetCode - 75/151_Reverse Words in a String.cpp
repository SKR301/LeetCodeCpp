class Solution {
public:
    string reverseWords(string s) {
        string str = "";
        string word = "";
        int start = 0;
        int end = s.length() - 1;

        while (s[start] == ' ') {
            start++;
        }
        while (s[end] == ' ') {
            end--;
        }

        for (int a = start; a <= end; a++) {
            if (s[a] != ' ' || s[a + 1] != ' ') {
                if (s[a] == ' ') {
                    str = ' ' + word + str;
                    word.clear();
                } else {
                    word += s[a];
                }
            }
        }

        return word + str;
    }
};
