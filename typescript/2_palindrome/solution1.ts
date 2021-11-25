function reverse_string(str) {
    let reversed = ''
    for (let character of str) {
        reversed = character + reversed
    }
    return (reversed === str)
}

var msg2 = reverse_string('RACECAR')
console.log(msg2)