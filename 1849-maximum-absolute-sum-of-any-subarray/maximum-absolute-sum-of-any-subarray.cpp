class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending=nums[0];
        int minending=nums[0];
        int res=abs(nums[0]);
        int n=nums.size();

        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=maxending+nums[i];
            int v3=minending+nums[i];

            maxending=(max(v1,max(v2,v3)));
            minending=(min(v1,min(v2,v3)));
            res=max(res,max(abs(maxending),abs(minending)));
        }
        return res;
    }
};