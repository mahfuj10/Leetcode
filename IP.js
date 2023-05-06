var defangIPaddr = function (address) {
    let IP = ''
    for (let i = 0; i < address.length; i++) {
        if (address[i] === '.') {
            IP += '[.]'
        } else {
            IP += address[i]
        }
    }
    return IP;
};
console.log(defangIPaddr("255.100.50.0"));