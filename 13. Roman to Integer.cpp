class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> romans = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

        int result = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            int currentValue = romans[s[i]];
            int nextValue = romans[s[i + 1]];
            if (nextValue && nextValue > currentValue)
            {
                result += nextValue - currentValue;
                i++;
            }
            else
            {
                result += currentValue;
            };
        }
        return result;
    }
};