class Solution
{
public:
    string interpret(string command)
    {
        string res = "";
        for (int i = 0; i < command.length(); ++i)
        {
            if (command[i] == 'G')
            {
                res += command[i];
            }
            else if (command[i] == '(')
            {
                res += command[i + 1] == ')' ? "o" : "al";
            }
        }
        return res;
    }
};
