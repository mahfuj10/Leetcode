/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations)
{
    let number = 0;
    for (let operation of operations)
    {
        if (operation.includes('--'))
        {
            number--
        }
        if (operation.includes('++'))
        {
            number++
        }
    }
    return number
};
