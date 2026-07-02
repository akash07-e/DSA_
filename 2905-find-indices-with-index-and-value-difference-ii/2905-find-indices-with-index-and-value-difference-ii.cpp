class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        int minidx=0;
        int maxidx=0;
        for(int j=id;j<nums.size();j++){
            int i=j-id;
            if(nums[i]<nums[minidx]) minidx=i;//0-j-idx tak ka minidx jisma id exist karta ha 
            if(nums[i]>nums[maxidx]) maxidx=i;//0-j-idx tak ka maxidx jisma id exist karta ha 
            if(abs(nums[minidx]-nums[j])>=vd) return {minidx,j};//minidx jo mila ha uska liya value check kyuki eek hi pair dena ha 
            if(abs(nums[maxidx]-nums[j])>=vd) return {maxidx,j};//maxidx jo mila ha uska liya value check kyuki eek hi pair dena ha 

        }
        return {-1,-1};
    }
};