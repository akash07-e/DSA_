class Solution {
public:
    int helper(vector<int>& weights,int capacity)
{
    int days = 1;
    int load = 0;

    for(int w : weights)
    {
        load += w;

        if(load > capacity)
        {
            days++;
            load = w;
        }
    }

    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int maxi=0;
        for (int i = 0; i <n;i++){
            maxi=max(weights[i],maxi);
            sum+=weights[i];
        }
        int l=maxi;
        int r=sum;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(helper(weights,mid)<=days){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
       return l; 
    }
};