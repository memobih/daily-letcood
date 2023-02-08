vector<int>dp; 
class Solution {
public:
    int jump(vector<int>& nums) { 
        dp.assign(nums.size()+2,-1); 
     return best( 0,nums);
    }
    int best(int i,vector<int>& nums){ 
        if(i>=nums.size()) return 20000;
         if(i==nums.size()-1) return 0 ; 
        int &ret=dp[i]; 
        if(~ret) return ret ; 
        ret=20000;
        for(int k= 1; k<=nums[i]; k++){ 
        ret=min(ret,best(i+k,nums)+1); 
        }
        return ret; 
    }
    
};
