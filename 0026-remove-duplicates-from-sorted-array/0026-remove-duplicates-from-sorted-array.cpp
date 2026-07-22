class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int v=nums.size();
        int j=0;
        for(int i=1;i<v;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};