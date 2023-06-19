/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target)
{
    const index = nums.indexOf(target) if (index == -1)
    {
        const sortedArr = [... nums, target ].sort((a, b) = > a - b) return sortedArr.indexOf(target)
    }
    return index;
};