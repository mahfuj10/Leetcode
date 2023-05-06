/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    const size = Math.max(word1.length, word2.length);
    let result = '';

    for(let i = 0;  i < size; i++){
        result += (word1[i] ?? '') + (word2[i] ?? '');
    }

    return result;
};