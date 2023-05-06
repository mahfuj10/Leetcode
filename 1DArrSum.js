
var runningSum = function (nums) {
    const sumArr = []

    if (nums.length === 0) return [];
    let currSum = nums[0]
    sumArr.push(currSum)

    for (let i = 1; i < nums.length; i++) {
        currSum += nums[i]
        sumArr.push(currSum)
    }

    return sumArr;
};

console.log(runningSum([1, 2, 3, 4]));