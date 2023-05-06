const singleNumber = function (nums) {

    const obj = {};

    for (const num of nums) {
        obj[num] = obj[num] + 1 || 1;
    }

    for (const key in obj) {
        if (obj[key] === 1) {
            return key;
        }
    }

};
console.log(singleNumber([4, 1, 2, 1, 2]));