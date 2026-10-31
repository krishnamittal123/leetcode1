class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        unordered_map<int,int> mpp;
        mpp[0]=1;
        long long count=0;
        for(int i=0;i<n;i++){
            xr^=nums[i];
            count+=mpp[xr];
            mpp[xr]++;
        }
        return count;

    } 
};