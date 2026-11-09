class Solution {
public:
    int lb(vector<int>& nums,int x){
        int n=nums.size();
        int low=0,high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    int ub(vector<int>& nums,int x){
        int n=nums.size();
        int low=0,high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>x){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }   
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lowerbound=lb(nums,target);
        if(lowerbound==n||nums[lowerbound]!=target) return {-1,-1};
        return {lowerbound,ub(nums,target)-1};
    }
};