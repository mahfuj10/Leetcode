/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums)
{
    nums.sort();
    const size = nums.length;
    for (let i = 0; i <= size; i++)
    {
        if (nums[i + 1] == = nums[i])
        {
            return nums[i];
        }
    }
    return -1
};