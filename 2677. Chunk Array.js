/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    const chunkArr = []
    let index = 0;
    
    while(index < arr.length){
        const reminingElement = arr.slice(index, index + size);
        chunkArr.push(reminingElement)
        index += size;
    }

    return chunkArr;
};