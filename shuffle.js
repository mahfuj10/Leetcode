function shuffle(nums, n){
    let i = 0
    let j =n;
    const arr = []
    while(i < n && j < ( 2 *n)){
        arr.push(nums[i])
        arr.push(nums[j])
        i++
        j++
    }
    return arr
}
console.log(shuffle([2,5,1,3,4,7],3));