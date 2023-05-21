class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> arr;

        for (int i = left; i <= right; ++i)
        {
            int temp = i;

            while (temp > 0)
            {
                int d = temp % 10;
                if (d == 0 || (i % d) != 0)
                    break;
                temp /= 10;
                if (temp == 0)
                    arr.push_back(i);
            }
        };

        return arr;
    }
};