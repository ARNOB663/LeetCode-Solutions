class Solution {
    isPowerOfFour(n) {
        if (n <= 0) return false;
        // Calculate the logarithm base 4 of n using the change of base formula
        let logBase4 = Math.log(n) / Math.log(4);
        // Check if the result is an integer
        return Math.floor(logBase4) === logBase4;  // If the floor of the result is equal to the result, then it is an integer
    }
}

const solution = new Solution();
const test1 = 16; // Expected output: true
const test2 = 5;  // Expected output: false
const test3 = 1;  // Expected output: true

// Function call
console.log(solution.isPowerOfFour(test1));
console.log(solution.isPowerOfFour(test2));
console.log(solution.isPowerOfFour(test3));