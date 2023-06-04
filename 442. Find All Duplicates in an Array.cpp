class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return {};

        vector<int> res;
        int size = nums.size();

        for (int i = 0; i < size; ++i)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (nums[i] == nums[j])
                {
                    res.push_back(nums[i]);
                    break;
                };
            }
        }

        return res;
    }
};