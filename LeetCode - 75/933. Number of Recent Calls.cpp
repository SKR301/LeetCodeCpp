class RecentCounter {
public:
    vector<int> counter;
    int a;
    int b;

    RecentCounter() {
        counter = {};
        a = 0;
        b = -1;
    }

    int ping(int t) {
        counter.push_back(t);
        b++;

        while (counter[b] - counter[a] > 3000 && a < b) {
            a++;
        }

        return b - a + 1;
    }
};
