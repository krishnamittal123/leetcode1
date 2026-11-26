class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++){
            int x=i,cnt=0;
            while(x>0){
                x&=(x-1);
                cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
        
    }
};