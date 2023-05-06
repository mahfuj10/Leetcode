var isPowerOfThree = function (n) {
    while (n % 3 === 0) {
        n = n / 3;
    }
    return n === 1;
};
console.log(isPowerOfThree(27));