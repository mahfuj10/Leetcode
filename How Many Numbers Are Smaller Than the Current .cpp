class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int size = nums.size();

        vector<int> result;

        for (int i = 0; i < size; ++i)
        {
            int count = 0;
            for (int j = 0; j < size; ++j)
            {
                if (nums[j] < nums[i] && i != j)
                {
                    count++;
                }
            }
            result.push_back(count);
        }

        return result;
    }
};