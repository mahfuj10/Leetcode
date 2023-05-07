class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int index = ruleKey == "color" ? 1 : ruleKey == "type" ? 0
                                                               : 2;
        int count = 0;

        for (int i = 0; i < items.size(); ++i)
        {
            if (items[i][index] == ruleValue)
            {
                count++;
            }
        }

        return count;
    }
};