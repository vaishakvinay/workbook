59. Spiral Matrix II

Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

 

Example 1:


Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]
Example 2:

Input: n = 1
Output: [[1]]
 

Constraints:

1 <= n <= 20

/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function(n) {
      let matrix = Array.from({ length: n }, () => Array(n).fill(0));

    let top = 0, bottom = n - 1;
    let left = 0, right = n - 1;

    let num = 1;

    while (top <= bottom && left <= right) {

        // → left to right
        for (let i = left; i <= right; i++) {
            matrix[top][i] = num;
            num++;
        }
        top++;

        // ↓ top to bottom
        for (let i = top; i <= bottom; i++) {
            matrix[i][right] = num;
            num++;
        }
        right--;

        // ← right to left
        if (top <= bottom) {
            for (let i = right; i >= left; i--) {
                matrix[bottom][i] = num;
                num++;
            }
            bottom--;
        }

        // ↑ bottom to top
        if (left <= right) {
            for (let i = bottom; i >= top; i--) {
                matrix[i][left] = num;
                num++;
            }
            left++;
        }
    }

    return matrix;
};
    
