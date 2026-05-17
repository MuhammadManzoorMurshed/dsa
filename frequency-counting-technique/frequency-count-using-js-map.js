const arr = [3, 1, 4, 10, 1, 5, 9, 2, 7, 6, 5, 3, 5, 10];
let freqMap = new Map();

for(let num of arr) {
    if(freqMap.has(num)) {
        freqMap.set(num, freqMap.get(num) + 1);
    } else {
        freqMap.set(num, 1);
    }
}

console.log(freqMap);