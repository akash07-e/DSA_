class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum=0;
        int n=nums.size();
        int rsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++){
            lsum+=nums[i];
        }
             maxsum=lsum;
        int j=n-1;//thats would use for right picking ...
        for(int i=k-1;i>=0;i--){
            lsum=lsum-nums[i];
            rsum=rsum+nums[j];
            j--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};