class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                int num = accounts[i][j];
                sum += num;
            }
            maxWealth = std::max(maxWealth, sum);
        }

        return maxWealth;
    };
};
