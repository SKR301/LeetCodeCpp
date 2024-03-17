class Solution {
public:
    string mod(string A, string B) {
        if (B == "") {
            return A;
        }

        int a = 0;
        int aSize = A.length();
        int bSize = B.length();

        while (a <= aSize - bSize) {
            if (A.substr(a, bSize) == B) {
                a += bSize;
            } else {
                return ".";
            }
        }

        string res = (a >= aSize) ? "" : A.substr(a);

        return res;
    }

    string gcdOfStrings(string str1, string str2) {
        if (str2.length() > str1.length()) {
            swap(str1, str2);
        }

        if (str2 == ".") {
            return "";
        }
        if (str2 == "") {
            return str1;
        }
        return gcdOfStrings(str2, mod(str1, str2));
    }
};
