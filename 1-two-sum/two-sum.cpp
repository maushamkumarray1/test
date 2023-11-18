class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          int n=nums.size();
        map<int,int>mp;
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=target-a;
            if(mp.find(b)!=mp.end()){
               temp.push_back(i);
               temp.push_back(mp[b]);
               return temp;

            }
            mp[a]=i;

        }
       


        
        return {-1,-1};
        
    }
};