class Solution {
public:
    int countstudents(vector<int>& arr,int maxpages){
        int n=arr.size();
        int students=1;
        long long pageonstudent=0;
        for(int i=0;i<n;i++){
            if(pageonstudent+arr[i]<=maxpages){
                pageonstudent+=arr[i];
            }
            else{
                students++;
                pageonstudent=arr[i];
            }
        }
        return students;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int students=countstudents(nums,mid);
            if(students>k) low=mid+1;
            else high=mid-1;
        }
        return low;
        
    }
    
};