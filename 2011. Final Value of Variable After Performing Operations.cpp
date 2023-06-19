class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int number = 0;

        for (const std::string &operation : operations)
        {
            if (operation.find("--") != std::string::npos)
            {
                number--;
            }
            if (operation.find("++") != std::string::npos)
            {
                number++;
            }
        }

        return number;
    }
};