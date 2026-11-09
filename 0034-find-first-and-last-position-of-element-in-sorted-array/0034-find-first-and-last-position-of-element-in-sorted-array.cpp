class Solution {
public:
    int firsto(vector<int>& nums,int x){
        int n=nums.size();
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==x){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<x) low=mid+1;
            else high=mid-1;
        }
        return first;
    }
    int lasto(vector<int>& nums,int x){
        int n=nums.size();
        int low=0,high=n-1;
        int last=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==x){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<x) low=mid+1;
            else high=mid-1;
        }
        return last;
    }   
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int f=firsto(nums,target);
        if(f==-1) return {-1,-1};
        int l=lasto(nums,target);
        return {f,l};
    }
};