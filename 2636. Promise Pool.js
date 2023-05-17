/**
 * @param {Function[]} functions
 * @param {number} n
 * @return {Function}
 */
var promisePool = async function(functions, n) {
    async function nextFunction(){
        if(functions.length === 0) return;
        const fn = functions.shift();
        await fn();
        await nextFunction()
    }
    const promises = Array(n).fill().map(nextFunction);
    await Promise.all(promises)
    };
    
    /**
     * const sleep = (t) => new Promise(res => setTimeout(res, t));
     * promisePool([() => sleep(500), () => sleep(400)], 1)
     *   .then(console.log) // After 900ms
     */
    2396. Strictly Palindromic Number

