const isValid = function (s) {
    const bracket = {
        '{': '}',
        '(': ')',
        '[': ']'
    }

    const heap = [];

    for (const char of s) {
        if (bracket[char]) {
            heap.push(bracket[char]);
        } else {
            if (heap.pop() !== char) return false;
        }
    }
    return !heap.length;
};

isValid('()')