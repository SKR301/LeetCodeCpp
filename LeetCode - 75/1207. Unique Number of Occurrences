class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map1;

        for(int a=0;a<arr.size();a++){
            map1[arr[a]]++;
        }

        unordered_map<int,vector<int>> map2;
        for(unordered_map<int,int>::iterator it = map1.begin();it!=map1.end();it++){
            map2[it->second].push_back(it->first);
        }

        for(unordered_map<int,vector<int>>::iterator it = map2.begin();it!=map2.end();it++){
            if(it->second.size()>1){
                return false;
            }
        }

        return true;
    }
};
