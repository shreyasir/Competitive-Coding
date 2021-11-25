function reverse_string(str) {
    return str.split('').every((char, i) => {
        return char === str[str.length - i - 1];
    });
}

var msg2 = reverse_string('RACECAR')
console.log(msg2)