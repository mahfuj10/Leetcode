class Solution
{
public:
    char repeatedCharacter(string s)
    {
        int max = INT_MAX;
        int size = s.size();
        for (int i = 0; i < size; ++i)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (s[i] == s[j])
                {
                    max = min(max, j);
                }
            }
        }
        return s[max];
    }
};