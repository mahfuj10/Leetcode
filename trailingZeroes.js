var trailingZeroes = function (n) {
    let factorial;
    let count = 0;
    if (n < 0) {
        factorial = -1;
    } else if (n === 0) {
        factorial = 1;
    } else {
        factorial = (n * trailingZeroes(n - 1));
    }
    for (const num of String(factorial)) {
        if (parseInt(num) === 0) {
            count++;
        }
    }
    return count;
};
console.log(trailingZeroes(0)
);