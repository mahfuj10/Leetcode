class Solution
{
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c)
    {
        int count = 0, size = arr.size();
        for (int i = 0; i < size - 2; ++i)
        {
            for (int j = i + 1; j < size - 1; ++j)
            {
                if (abs(arr[i] - arr[j]) <= a)
                {
                    for (int k = j + 1; k < size; k++)
                    {
                        if (abs(arr[j] - arr[k]) <= b && abs(arr[k] - arr[i]) <= c)
                            count++;
                    }
                }
            }
        }
        return count;
    }
};