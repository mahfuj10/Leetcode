class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        for (int i = 0; i < grid.size(); ++i)
        {
            sort(grid[i].begin(), grid[i].end());
        }

        int ans = 0;

        for (int i = 0; i < grid[0].size(); ++i)
        {
            int maxn = INT_MIN;

            for (int j = 0; j < grid.size(); ++j)
            {
                maxn = max(maxn, grid[j][i]);
            }

            ans += maxn;
        };

        return ans;
    }
};