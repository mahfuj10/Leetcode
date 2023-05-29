class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count = 0;
        int arrSize = nums.size();
        for (int i = 0; i < arrSize; i++)
        {
            for (int j = i + 1; j < arrSize; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                };
            };
        };
        return count;
    }
};