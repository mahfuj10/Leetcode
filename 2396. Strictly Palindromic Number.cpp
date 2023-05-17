class Solution
{
public:
    bool isPalidrome(string &base)
    {
        int i = 0, j = base.size() - 1;

        while (i < j)
        {
            if (base[i] != base[j])
                return false;
            i++, j--;
        };

        return true;
    };
    bool isStrictlyPalindromic(int n)
    {
        for (int i = 2; i <= n - 2; ++i)
        {
            string base = "";
            int bn = n;

            while (bn)
            {
                base += to_string(bn % i);
                bn /= i;
            }

            if (!isPalidrome(base))
                return false;
        }

        return true;
    }
};
