class Solution
{
public:
    bool checkString(string s)
    {
        for (int i = 0; i < s.length() - 1; ++i)
        {
            if (s.charAt(i) == 'b' && s.charAt(i + 1) == 'a')
                return false;
        }
        return true;
    }
};