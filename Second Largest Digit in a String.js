/**
 * @param {string} s
 * @return {number}
 */
var secondHighest = function(s) {
    const arr = [];
    
    for(let i = 0; i < s.length ; i++){
        const num = parseInt(s[i]);
        if(!isNaN(num) && arr.indexOf(num) == -1){
            arr.push(num)
        }
    };

    if(arr.length < 2) return -1;
    arr.sort();

    const arr_size = arr.length;
    for(let i = arr_size  - 2; i >= 0; i-- ){
        if(arr[i] != arr[arr_size - 1]){
            return arr[i]
        }
        return -1;
    }


     console.log(arr)
};