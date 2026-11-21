class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int maxcount=-1;
        int index=-1;
        for(int i=0;i<n;i++){
            int countrow=0;
            for(int j=0;j<m;j++){
                countrow+=mat[i][j];
            }
            if(countrow>maxcount){
                maxcount=countrow;
                index=i;
            }
        }
        return {index,maxcount};
    }

};