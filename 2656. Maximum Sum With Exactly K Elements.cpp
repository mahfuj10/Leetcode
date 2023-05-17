class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int size = nums.size();
        int first = nums[0];
        int sum = 0;

        for (int i = 0; i < size; ++i)
        {
            if (first < nums[i])
            {
                first = nums[i];
            };
        };

        for (int i = 0; i < k; ++i)
        {
            sum += first;
            first++;
        };

        return sum;
    }
};