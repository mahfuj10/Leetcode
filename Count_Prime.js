let count = 0

function primeNumbersCount(n){

// for (let i = 0; i < n; i++) {
//     let flag = 0;

//     for (let j = 2; j < i; j++) {
//         if (i % j == 0) {
//             flag = 1;
//             break;
//         }
//     }

//     if (i > 1 && flag == 0) {
//         count++
//     }
// }

for(let i = 0; i < n ; i++){
    let flag = 0 ;
    // for(let j = 2; j < i; j++){
        if(i % (i + 3) == 0){
            flag = 1
            break
        }
    // }
    if(i > 1 && flag == 0){
        count++
    }
}


}
primeNumbersCount(10)
console.log(count);
