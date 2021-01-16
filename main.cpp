class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int ret = 0;
        unordered_map<int, int> tempMap;
        
        for (int i = 0; i < candyType.size(); ++i) {
            tempMap[candyType[i]] = 1;
        }
        
        int mid = candyType.size() / 2;
        
        ret = tempMap.size() < mid ? tempMap.size() : mid;
        
        return ret;
    }
};
