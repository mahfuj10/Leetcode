class Solution
{
public:
    int reverse(int x)
    {
        int num = 0;

        while (x != 0)
        {
            int tail = x % 10;
            int res = num * 10 + tail;
            if ((res - tail) / 10 != num)
                return 0;
            num = res;
            x /= 10;
        };

        return num;
    }
};