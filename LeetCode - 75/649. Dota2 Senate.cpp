class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> dPos;
        queue<int> rPos;
        int size = senate.length();

        for (int a = 0; a < size; a++) {
            (senate[a] == 'R') ? rPos.push(a) : dPos.push(a);
        }

        int a = size;
        while (!rPos.empty() && !dPos.empty()) {
            int rNum = rPos.front();
            rPos.pop();
            int dNum = dPos.front();
            dPos.pop();

            (rNum < dNum) ? rPos.push(a) : dPos.push(a);
            a++;
        }

        return (rPos.empty()) ? "Dire" : "Radiant";
    }
};
