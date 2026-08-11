class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int bestending=nums[0];
        int answer=nums[0];

        for(int i=1;i<n;i++){
            int v1=bestending+nums[i];
            int v2=nums[i];
            bestending=max(v1,v2);
            answer=max(answer,bestending);
        }
        return answer;
    }
};