class Solution {
public:
int first(vector<int>&nums,int target){
    int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
           
            if (nums[mid] == target) {
             right=mid-1;
            }
            else if(nums[mid]<target) left=mid+1;
            else right =mid-1;
        }
        return left;
}
int last(vector<int>&nums,int target){
    int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
           
            if (nums[mid] == target) {
             left=mid+1;
            }
            else if(nums[mid]<target) left=mid+1;
            else right =mid-1;
        }
        return right;
}

    vector<int> searchRange(vector<int>& nums, int target) {
       int a=first(nums,target);
       if(a == nums.size() || nums[a] != target)
        return {-1,-1};
       int b=last(nums,target);
       
        return {a,b};
    }
};