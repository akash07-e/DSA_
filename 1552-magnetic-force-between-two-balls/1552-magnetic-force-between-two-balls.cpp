
class Solution {
  public:
   bool helper(vector<int> &arr, int k,int mid){
       int curcount=1;
       int load=arr[0];
       for(int i=0;i<arr.size();i++){
           if(arr[i]-load>=mid){
               curcount ++;
               load=arr[i];
           }
           if(curcount>=k) return true;
       }
       return false;
   }
    int maxDistance(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int l=0;
        int r=arr[n-1]-arr[0];
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(helper(arr,k,mid)==true){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};