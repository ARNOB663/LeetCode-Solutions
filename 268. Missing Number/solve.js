class Solution {
    // Method to find the missing number
    missingNumber(nums) {
        const n = nums.length;

        // Mathematical Formula Approach
        const total = (n * (n + 1)) / 2; // Sum of first n natural numbers
        const sum = nums.reduce((acc, num) => acc + num, 0);

        // If the difference yields a valid result, return it
        if (total - sum >= 0) {
            console.log("Using Mathematical Formula Approach:");
            return total - sum;
        }

        // Hashing Approach (Fallback)
        console.log("Using Hashing Approach:");
        const hash = new Array(n + 1).fill(0); // Create a hash array initialized with 0

        // Mark the presence of numbers
        for (let i = 0; i < nums.length; i++) {
            hash[nums[i]] = 1;
        }

        // Find the missing number
        for (let i = 0; i <= n; i++) {
            if (hash[i] === 0) {
                return i;
            }
        }

        return -1; // Default case (should not occur with valid input)
    }
}

// Test cases
const solution = new Solution();

const nums1 = [3, 0, 1];
console.log("Missing number:", solution.missingNumber(nums1)); // Output: 2

const nums2 = [0, 1];
console.log("Missing number:", solution.missingNumber(nums2)); // Output: 2

const nums3 = [9, 6, 4, 2, 3, 5, 7, 0, 1];
console.log("Missing number:", solution.missingNumber(nums3)); // Output: 8

const nums4 = [0];
console.log("Missing number:", solution.missingNumber(nums4)); // Output: 1

const nums5 = [0, 2];
console.log("Missing number:", solution.missingNumber(nums5)); // Output: 1
