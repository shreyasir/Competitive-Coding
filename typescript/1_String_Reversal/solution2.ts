function reverse2(str) {
    let reversed = ''
    for (let character of str) {
        reversed = character + reversed
    }
    return reversed
}

var msg2 = reverse2('APPLE')
console.log(msg2)