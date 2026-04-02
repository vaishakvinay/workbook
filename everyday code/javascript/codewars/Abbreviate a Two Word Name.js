Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F

function abbrevName(name){
     
    name = name.toUpperCase().split(' ');
  
    let lst =[];
  
      for (let word of name){
        lst.push(word[0]);
      }
    return lst.join('.')
}
