class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string ans = "";
        int count = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ' ')
                count++;
            if (count == k)
                break;
            ans += s[i];
        }

        return ans;
    }
};