class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int ret = 0;
        set<int> tempSet;
        
        for (int i = 0; i < candyType.size(); ++i) {
            tempSet.insert(candyType[i]);
        }
        
        int mid = candyType.size() / 2;
        
        ret = tempSet.size() < mid ? tempSet.size() : mid;
        
        return ret;
    }
};
