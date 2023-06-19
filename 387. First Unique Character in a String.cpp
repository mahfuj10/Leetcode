class Solution
{
public:
    int firstUniqChar(string s)
    {

        unordered_map<char, int> arr;

        for (int i = 0; i < s.length(); i++)
        {
            if (arr.find(s[i]) != arr.end())
            {
                arr[s[i]]++;
            }
            else
            {
                arr[s[i]] = 1;
            }
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (arr[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};