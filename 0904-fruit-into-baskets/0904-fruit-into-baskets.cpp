class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0, j=0,maxlen=0,n=fruits.size();
        unordered_map<int,int>mp;
        while(j<n){
            mp[fruits[j]]++;
             
            if(mp.size()<=2){
                maxlen=max(maxlen,j-i+1);
            }
           if(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                i++;
            }
            j++;
        }
        return maxlen;
    }
};