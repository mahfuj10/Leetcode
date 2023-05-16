class Solution
{
public:
    vector<int> leftRigthDifference(vector<int> &nums)
    {
        int sum = 0;
        int size = nums.size();
        vector<int> lsum, res;

        for (int i = 0; i < size; ++i)
        {
            lsum.push_back(sum);
            sum += nums[i];
        }

        sum = 0;
        vector<int> rsum(size, 0);

        for (int i = size - 1; i >= 0; --i)
        {
            rsum[i] = sum;
            sum += nums[i];
        }

        for (int i = 0; i < size; ++i)
        {
            res.push_back(abs(lsum[i] - rsum[i]));
        }

        return res;
    }
};