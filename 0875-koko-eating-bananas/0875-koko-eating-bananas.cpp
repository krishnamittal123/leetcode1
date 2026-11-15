class Solution {
public:
    long long fun(vector<int>& arr,int hourly){
        long long totalhrs=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            totalhrs+=ceil((double)arr[i]/hourly);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int low=1,high=maxi,ans=INT_MAX;
        while(low<=high){
            long long mid=(low+high)/2;
            long long reqtime=fun(piles,mid);
            if(reqtime<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
        
    }
};