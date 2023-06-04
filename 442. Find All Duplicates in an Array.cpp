class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return {};
        vector<int> res;
        unordered_map<int, int> mp;
        for (int no : nums)
            mp[no]++;
        for (auto it : mp)
            if (it.second == 2)
                res.push_back(it.first);
        return res;
    }
};