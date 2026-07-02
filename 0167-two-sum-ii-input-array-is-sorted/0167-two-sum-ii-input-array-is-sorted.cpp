class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        int left=0;
        int right=n-1;//there i used the two pointer for optimal solution due to sorted array 
        while(left<=right){
            int sum=num[left]+num[right];
            if(sum==target) return {left+1,right+1};
            else if(sum>target)  right--;
            else left++;
        }
        return {};
    }
};