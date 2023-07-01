class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int size = nums.size(), steps = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size / 2; ++i)
        {
            steps += nums[size - 1 - i] - nums[i];
        }

        return steps;
    }
};