class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
       
        int count=0;
        unordered_map<int,int>mp;
        mp[0]++;
     
        for(int j=0;j<nums.size();j++){
              sum+=nums[j];
              if(mp.find(sum-k)!=mp.end()){
                 count+=mp[sum-k];
              }
              mp[sum]++;
        }
        return count;
    }
};