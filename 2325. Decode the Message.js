/**
 * @param {string} key
 * @param {string} message
 * @return {string}
 */
var decodeMessage = function(key, message) {
    const k = new Set(key.replaceAll(" ",""));
    const m = message;
    const letters = 'abcdefghijklmnopqrstuvwxyz';
    const chars = {};
    let result = "";
    let i = 0;

    for(const v of k){
        chars[v] = letters[i];
        i++;
    }

    for(const c of m){
        result += chars[c] ? chars[c] : " ";
    }

    return result;
};