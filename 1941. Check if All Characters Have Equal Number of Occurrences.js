/**
 * @param {string} s
 * @return {boolean}
 */
var areOccurrencesEqual = function(s) {
    const chars = {};
    let isEqual = false;

    for(const c of s){
        chars.hasOwnProperty(c) ? chars[c]  += 1 :  chars[c] = 1;
    }
    return new Set(Object.values(chars)).size === 1;
};
