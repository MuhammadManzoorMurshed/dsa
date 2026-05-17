const arr = [3, 1, 4, 1, 5, 9, 2, 7, 6, 5, 3, 5];
const freq = {};

for(num of arr) {
    if(freq[num]) {
        freq[num]++;
    } else {
        freq[num] = 1;
    }
}

console.log(freq);