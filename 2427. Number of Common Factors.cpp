class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int count = 1;
        int gc = gcd(a, b);

        for (int i = 2; i <= gc; i++)
        {
            if ((a % i == 0) && (b % i == 0))
                count++;
        };

        return count;
    }
};