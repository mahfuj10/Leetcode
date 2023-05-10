/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    strs.sort();
    
    const s1 = strs[0];
    const s2 = strs[strs.length - 1];
    let index = 0;

    while(index < s1.length && index < s2.length){
        if(s1[index] === s2[index]){
            index++;
        }else {
            break
        }
    }

    return s1.substring(0,index)
};