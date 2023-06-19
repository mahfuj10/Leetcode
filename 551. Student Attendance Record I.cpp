class Solution
{
public:
    bool checkRecord(string s)
    {
        int l = 0;
        int a = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'A')
            {
                a++;
                l = 0;
            }
            if (s[i] == 'L')
            {
                l++;
            }
            else
            {
                l = 0;
            }
            if (l >= 3)
                return false;
            if (a >= 2)
                return false;
        }
        return true;
    }
};