class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int size = nums.size();
        int missing = size;

        for (int i = 0; i < size; ++i)
        {
            missing ^= i ^ nums[i];
        }

        return missing;
    }
};