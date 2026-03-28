//
// This is only a SKELETON file for the 'Collatz Conjecture' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const steps = (numbers) => {
    if (numbers <= 0) {
    throw new Error("Only positive integers are allowed");
  }
  let count =0;
  while (numbers !==1){
  numbers=(numbers % 2===0)? numbers /2:(numbers *3) + 1;
  count++;
  }
return count;
};
