function LCM(n1,n2){
    let min = n1>n2 ? n1 :2;
    while(true){
        if(min % n1 ===0 && min % n2 ===0){
            console.log('LCM is', min);
            break
        }
        min++
    }
}
LCM(6,12)

function GCM(n1,n2){
    let gcm;
    for(let i = 1 ; i <= n1 && i <= n2;i++){
        if(n1 % i ==0 && n2 % i ==0){
            gcm = i
        }
    }
    console.log('GCM is', gcm);
}
GCM(6,12)