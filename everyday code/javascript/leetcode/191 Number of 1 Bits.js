191. Number of 1 Bits

Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

 

Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.

Example 2:

Input: n = 128

Output: 1

Explanation:

The input binary string 10000000 has a total of one set bit.

Example 3:

Input: n = 2147483645

Output: 30

Explanation:

The input binary string 1111111111111111111111111111101 has a total of thirty set bits.

var hammingWeight = function(n) {
    const binary = n.toString(2);
    let count=0;
    for (let i=0;i<binary.length;i++){
        if (binary[i]=== '1'){
            count+=1;
        }
    }
    return count
};
