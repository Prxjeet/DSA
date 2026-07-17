class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer=0;
        int cm=1;

        while(cm < nums.size()){
            if(nums[cm] != nums[officer]){
                officer++;
                nums[officer] = nums[cm];
            }
            cm++;
        }
        int res = officer + 1;
        return res;
            }   
};
