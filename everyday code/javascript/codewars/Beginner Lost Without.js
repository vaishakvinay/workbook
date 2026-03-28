Beginner - Lost Without a Map

Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]

function maps(x){
  
  let lst=[]
  for (let i=0; i<x.length;i++){
    x[i]*=2
    lst.push(x[i])
    
  }
  return lst
  
}

// also
function maps(x){
  
return x.map(n => n * 2);}
