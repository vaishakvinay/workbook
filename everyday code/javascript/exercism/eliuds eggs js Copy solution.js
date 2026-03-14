eliuds-eggs.js
Copy solution
//
// This is only a SKELETON file for the 'Eliud's Eggs' exercise. It's been provided as a
// convenience to get you started writing code faster.
//
export const eggCount = (displayValue) => {
  let count=0
  let binary=displayValue.toString(2);
  for(let i=0;i<= binary.length;i++){
      if (binary[i] === "1"){
          count+=1;}
  }
  return count
  
};
