function PickingNumbers(arr){
    const newArr = []
    for(let i = 0; i < arr.length; i++){
    // for(let j =  i + 1; j < arr.length; j++){
        if((arr[i] - arr[i +1]) < 1){
           newArr.push(arr[i])
           newArr.push(arr[i+1])
        }
    // }
}
    console.log('arr', newArr);
}

PickingNumbers([4 ,6 ,5 ,3 ,3 ,1])