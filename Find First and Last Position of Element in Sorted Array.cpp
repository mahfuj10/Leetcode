class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int arr_size = nums.size();
        int start = -1;
        int end = -1;

        for (int i = 0; i < arr_size; ++i)
        {
            if (target != nums[i])
            {
                continue;
            }
            if (start == -1)
            {
                start = i;
            };
            end = i;
        }

        if (start != -1)
        {
            return {start, end};
        }
        return {-1, -1};
    }
};