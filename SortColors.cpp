class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a = 0, b = 0, c = 0;
        int n = nums.size();
        vector<int> ans;
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                a++;
                
            }
            else if(nums[i] == 1)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        int k = 0;
        while(a>0)
        {
            nums[k] = 0;
            a--;
            k++;
        }
        while(b>0)
        {
            nums[k] = 1;
            b--;
            k++;
        }
        while(c>0)
        {
            nums[k] = 2;
            c--;
            k++;
        }
    }
};