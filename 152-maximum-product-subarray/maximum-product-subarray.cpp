class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1;
        int suffix=1;
        int ans=INT_MIN;
        int n=nums.size();
        int x,y;
        for(int i=0;i<nums.size();i++){
            prefix*=nums[i];           
            suffix*=nums[n-i-1];          
            ans=max(ans,max(prefix,suffix));
             if(prefix==0){               
                 prefix=1;               
            }
             if(suffix==0){               
                suffix=1;               
            }
        }
     return ans;
        
    }
};