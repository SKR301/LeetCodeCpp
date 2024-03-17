class Solution {
public:
    string decodeString(string s) {
        stack<string> stk;
        string tempStr = "";

        for (char ch : s) {
            if (ch == ']') {

                tempStr = "";
                string tempCh;
                while (tempCh != "[") {
                    tempCh = stk.top();
                    stk.pop();
                    tempStr = tempCh + tempStr;
                }

                tempStr.erase(0, 1);
                string countStr = "";
                while (!stk.empty()){
                    if(stk.top()[0] >= '0' && stk.top()[0] <= '9'){
                        countStr = stk.top() + countStr;
                        stk.pop();
                    } else {
                        break;
                    }
                }

                int count = stoi(countStr);
                string newStr = "";
                while (count--) {
                    newStr += tempStr;
                }

                stk.push(newStr);
            } else {
                string str(1, ch);
                stk.push(str);
            }
        }

        string str;
        while (!stk.empty()) {
            str = stk.top() + str;
            stk.pop();
        }

        return str;
    }
};
