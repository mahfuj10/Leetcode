class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long int left = 0, right = sqrt(c);
        if (c < 0)
            return false;
        while (left <= right)
        {
            long int curr = left * left + right * right;
            if (curr < c)
                left++;
            else if (curr > c)
                right--;
            else
                return true;
        };
        return false;
    }
};