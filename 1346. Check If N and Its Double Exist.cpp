class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int n = arr.size(), i, j;
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                if (arr[i] == arr[j] * 2 && i != j)
                {
                    return true;
                }
            }
        }
        return false;
    }
};