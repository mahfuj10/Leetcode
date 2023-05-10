/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const newArr = [];

    for(let i = 0; i < arr.length; i++){
        const element = arr[i];
        if(fn(element,i)){
            newArr.push(element)
        }
    }

    return newArr
};