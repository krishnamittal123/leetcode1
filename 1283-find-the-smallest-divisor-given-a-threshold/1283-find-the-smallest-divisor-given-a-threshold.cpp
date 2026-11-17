class Solution {
public:
    int sumbyD(vector<int>& nums,int div){
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/div);
        }
        return sum;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        if(n>threshold) return -1;
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1,high=maxi,ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(sumbyD(nums,mid)<=threshold){
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