class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> arr;

        for (auto num1 : nums1)
        {
            arr.push_back(num1);
        };

        for (auto num2 : nums2)
        {
            arr.push_back(num2);
        };

        sort(arr.begin(), arr.end());

        int size = arr.size();
        bool isOdd = (size % 2) == 0 ? false : true;

        return isOdd ? arr[size / 2] : ((arr[(size / 2) - 1] + arr[size / 2]) / 2.0);
    }
};