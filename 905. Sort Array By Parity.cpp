class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        for (int i = 0, j = 0; j < nums.size(); ++j)
        {
            if (nums[j] % 2 == 0)
            {
                int temp = nums[i];
                nums[i++] = nums[j];
                nums[j] = temp;
            }
        }
        return nums;
    }
};