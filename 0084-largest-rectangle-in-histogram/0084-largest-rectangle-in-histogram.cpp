class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>nsi(n,n);
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
             while(!st.empty()&& arr[st.top()]>=arr[i]){
       st.pop();
   }
    if(!st.empty()) {nsi[i]=st.top();}
           st.push(i);
}
        

         stack<int>et;
        vector<int>psi(n,-1);
        et.push(0);
        for(int i=1;i<n;i++){
             while(!et.empty()&&arr[et.top()]>=arr[i]){
       et.pop();
   }
    if(!et.empty()){ psi[i]=et.top();}
    et.push(i);
}
        
        int breadth=1;
        int max_area=0;
        for(int i=0;i<n;i++){
            breadth=nsi[i]-psi[i]-1;
            int a=breadth*arr[i];
            max_area=max(max_area,a);
        }
        return max_area;
    }
};