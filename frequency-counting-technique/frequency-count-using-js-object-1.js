const arr = [3, 1, 4, 10, 1, 5, 9, 2, 7, 6, 5, 3, 5, 10];
const freq = {};

for (num of arr) {
    freq[num] = (freq[num] || 0) + 1;
}

console.log(freq);