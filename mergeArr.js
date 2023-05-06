var mergeTwoLists = function (list1, list2) {
    const newArr = [];

    for (let i = 0; i < list1.length; i++) {
        newArr.push(list1[i])
    }
    for (let j = 0; j < list2.length; j++) {
        newArr.push(list2[j])
    }

    return newArr.sort((a, b) => a - b)
};

console.log(mergeTwoLists([], [0]));