class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<num.size();i++){
            int needed=target-num[i];
            if(mp.find(needed)!=mp.end()){
                return {mp[needed],i+1};
            }
            mp[num[i]]=i+1;
        }
        return {-1,-1};
    }
};