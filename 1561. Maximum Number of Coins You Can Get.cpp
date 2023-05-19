class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        int result = 0, size = piles.size();

        sort(piles.begin(), piles.end());

        for (int i = size / 3; i < size; i += 2)
        {
            result += piles[i];
        };

        return result;
    }
};