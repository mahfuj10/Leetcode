class Solution
{
public:
    vector<int> getNoZeroIntegers(int n)
    {
        for (int i = 1; i < n; ++i)
        {
            if (!containZero(i) && !containZero(n - i))
            {
                return {i, n - i};
            }
        }
        return {-1, -1};
    };
    bool containZero(int num)
    {
        string str = to_string(num);
        return find(str.begin(), str.end(), '0') != str.end();
    }
};