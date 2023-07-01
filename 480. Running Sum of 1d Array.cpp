class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> arr;
        int size = nums.size();

        if (size == 0)
            return arr;

        int sum = nums[0];
        arr.push_back(sum);

        for (int i = 1; i < size; ++i)
        {
            sum += nums[i];
            arr.push_back(sum);
        }

        return arr;
    }
};