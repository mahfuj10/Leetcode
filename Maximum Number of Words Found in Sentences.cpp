/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences)
{
    let maxWord = sentences[0].trim().split(/\s + /).length;
    for (let i = 0; i < sentences.length; i++)
    {
        for (let j = i; j < sentences.length; j++)
        {
            if (maxWord < sentences[j].trim().split(/\s + /).length)
            {
                maxWord = sentences[j].trim().split(/\s + /).length
            }
        }
    }
    return maxWord
};