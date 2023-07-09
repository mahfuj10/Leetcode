class Solution
{
public:
    string defangIPaddr(string address)
    {
        string IP = "";
        for (int i = 0; i < address.length(); ++i)
        {
            if (address[i] == '.')
            {
                IP += "[.]";
            }
            else
            {
                IP += address[i];
            }
        }
        return IP;
    }
};
