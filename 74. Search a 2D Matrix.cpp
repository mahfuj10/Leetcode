class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size(), i, j;
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < matrix[i].size(); ++j)
            {
                if (matrix[i][j] == target)
                {
                    return true;
                }
            }
        }
        return false;
    }
};