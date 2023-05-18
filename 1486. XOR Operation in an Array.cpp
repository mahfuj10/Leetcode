class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int nums[n];
        int result = 0;

        for (int i = 0; i < n; ++i)
        {
            nums[i] = start + 2 * i;
        }

        for (int j = 0; j < n; ++j)
        {
            result ^= nums[j];
        }

        return result;
    }
};