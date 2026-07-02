class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
       
        // int i=0;
        // int j=1;
        // int k=nums.size()-1;
        int count =0;
        for(int i=0;i<=nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                     if(nums[i]!=nums[j]&&nums[i]!=nums[k]&&nums[j]!=nums[k]){
               count++;
              }
                }
            }
        }
        // while(j<k||k>0||j<nums.size()-1){
        //      if(nums[i]!=nums[j]&&nums[i]!=nums[k]&&nums[j]!=nums[k]){
        //       count++;
        //      }
           
        //     else k--;

        // }
       return count ;
    }
};