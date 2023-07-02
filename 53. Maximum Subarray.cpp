class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int curr = 0, i, j, n = size(nums), ans = 0;
        for (i = 0; i < n; ++i)
        {
            curr = 0;
            for (j = i; j < n; ++j)
            {
                curr += nums[j];
                ans = max(ans, curr);
            }
        }
        return ans;
    }
};