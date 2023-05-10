class Solution
{
public:
    int findIndex(vector<int> arr, int len, int seek)
    {
        for (int i = 0; i < len; ++i)
        {
            if (arr[i] == seek)
                return i;
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        for (int num : nums1)
        {
            int flag = -1;
            int index = findIndex(nums2, nums2.size(), num);

            for (int j = index + 1; j < nums2.size(); ++j)
            {
                if (num < nums2[j])
                {
                    flag = nums2[j];
                    break;
                };
            };

            result.push_back(flag);
        };
        return result;
    }
};