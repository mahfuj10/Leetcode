class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int maxNum = candies[0];
        for (int i = 0; i < candies.size(); ++i)
        {
            int candie = candies[i];
            if (maxNum < candie)
            {
                maxNum = candie;
            };
        };

        vector<bool> arr(candies.size());
        for (int i = 0; i < candies.size(); ++i)
        {
            arr[i] = (candies[i] + extraCandies >= maxNum);
        };
        return arr;
    }
};