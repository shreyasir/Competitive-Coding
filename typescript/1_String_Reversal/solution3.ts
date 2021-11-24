function reverse3(str) {
    return str.split('').reduce((rev, char) => char + rev, '')
}

var msg3 = reverse3('APPLE')
console.log(msg3)