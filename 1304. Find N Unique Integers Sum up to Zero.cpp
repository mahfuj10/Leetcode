class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> arr(n);

        for (int i = 1; i < n; ++i)
        {
            arr[i] = i;
            arr[0] -= i;
        }

        return arr;
    }
};