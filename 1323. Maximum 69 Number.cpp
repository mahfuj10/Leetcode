class Solution
{
public:
    int maximum69Number(int num)
    {
        string s_num = to_string(num);
        for (int i = 0; i < s_num.size(); ++i)
        {
            char s = s_num[i];
            if (s == '6')
            {
                s_num[i] = '9';
                break;
            }
        }

        return stoi(s_num);
    }
};