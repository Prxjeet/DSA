class Solution {
public:
    vector<int> twoSum(vector<int>& array, int target) {
        
        unordered_map<int,int> mp;
          
          for(int i=0;i<array.size();i++){

          int needed = target - array[i];

          if(mp.find(needed) != mp.end())
          {return{mp[needed]+1,i+1};
          
          }
          mp[array[i]]=i;
          }
          return{};
            }
};