class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> table(numRows);

        for (int i = 0; i < numRows; ++i)
        {
            table[i].resize(i + 1);
            table[i][0] = 1;

            for (int j = 1; j < i; ++j)
            {
                table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
            }

            table[i][i] = 1;
        }

        return table;
    }
};