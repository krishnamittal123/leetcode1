class Solution {
public:
    bool ispossible(vector<int>& nums,int m,int k,int d){
        int count=0;
        int bouq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=d){
                count++;
            }
            else{
                bouq+=(count/k);
                count=0;
            }
        }
        bouq+=(count/k);
        return bouq>=m;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=(long long)m*k;
        if(val>bloomDay.size()) return -1;
        int minday=*min_element(bloomDay.begin(),bloomDay.end());
        int maxday=*max_element(bloomDay.begin(),bloomDay.end());
        int low=minday,high=maxday,ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(ispossible(bloomDay,m,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};