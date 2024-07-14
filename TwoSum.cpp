class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int i;
       map<int,int> mpp;
       int n = nums.size();
       for(i=0;i<n;i++)
       {
            mpp[nums[i]] = i;
       }
       for(i=0;i<n;i++)
       {    
            int rem = target-nums[i];
            if(mpp.find(rem) != mpp.end() && mpp[rem] != i)
            {
                return {mpp[rem],i};
            }
       }
       return {-1,-1};
    }
};