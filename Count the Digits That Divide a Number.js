/**
 * @param {number} num
 * @return {number}
 */
var countDigits = function(num) {
    const arr = String(num).split('');
    let count = 0;
    for(let i = 0; i < arr.length; i++){
        const n = parseInt(arr[i]);
        if((num % n) == 0){
            count++;
        }
    }
    return count;
};