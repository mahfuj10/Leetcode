class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int lsf = INT_MAX, op = 0, pist = 0, i;

        for (i = 0; i < prices.size(); ++i)
        {
            if (prices[i] < lsf)
            {
                lsf = prices[i];
            }

            pist = prices[i] - lsf;

            if (op < pist)
            {
                op = pist;
            }
        };
        return op;
    }
};