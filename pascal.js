const pascel = function(rows){
    const table = [] //  [ 1, 2, 1 ]
    for(let i = 0 ; i < rows; i++){
        table[i] = []
        table[i][0] = 1
        for(let j = 1; j < i; j++){
            table[i][j]  = table[i - 1][j-1] + table[i - 1][j] // 2 = 1 + 1
        }
        table[i][i] = 1
    }
    return table
}

pascel(3)