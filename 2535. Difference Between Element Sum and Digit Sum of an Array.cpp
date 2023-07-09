class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int num1 = 0, num2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            num1 += nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 9)
            {
                int num = nums[i];
                while (num != 0)
                {
                    num2 += num % 10;
                    num /= 10;
                }
            }
            else
            {
                num2 += nums[i];
            }
        }

        return num1 - num2;
    }
};
