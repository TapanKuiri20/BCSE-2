const obj = require('./indes');
const fs = require('fs');
const text = fs.readFileSync('texts.txt','utf-8');
console.log(text);
obj.sum(4,5);
