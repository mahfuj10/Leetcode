class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int mask = x ^ y, count = 0;
        while (mask > 0)
        {
            count += mask & 1;
            mask >>= 1;
        }
        return count;
    }
};