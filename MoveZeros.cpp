class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,cnt = 0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin()+i);
                cnt++;
                i--;
            }
        }
        while(cnt--)
        {
            nums.push_back(0);
        }
        
    }
};