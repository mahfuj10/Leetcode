class Solution
{
public:
    int countAsterisks(string s)
    {
        int count = 0;
        bool insidePipe = false;

        for (int i = 0; i < s.length(); ++i)
        {
            char c = s[i];
            if (c == '|')
                insidePipe = !insidePipe;
            if (!insidePipe && c == '*')
                count++;
        }

        return count;
    }
};