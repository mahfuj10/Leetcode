class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int i = 1;
        while (num > i)
        {
            num -= i;
            i += 2;
        }
        return num == 0;
    }
};