class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int size = words.size();
        bool result[123] = {};

        for (char charecter : allowed)
        {
            result[charecter] = true;
        };

        for (string word : words)
        {
            for (char c : word)
            {
                if (!result[c])
                {
                    size--;
                    break;
                }
            }
        };

        return size;
    }
};